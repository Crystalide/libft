/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:52 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 18:12:30 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);
// Concatenate two strings with size limiting.

// appends the string src to the end of dest,
// ensuring that dest does not exceed a specified size, size, and always ends with a null terminator.
// It returns the total length the concatenated string would have if size were large enough.

// int	main(void)
// {
// 	char	dest[] = "Hello";
// 	// char	dest1[] = "Hello";
// 	char	src[] = "World";

// 	printf("Source: %s\n", dest);
// 	printf("Destination: %s\n", src);
// 	printf("Result of concatenation: %zu\n", ft_strlcat(dest, src, 15));
// 	// printf("Result of concatenation: %zu\n", strlcat(dest1, src, 15));
// 	printf("Result of concatenation: %s\n", dest);
// 	// printf("Result of concatenation: %s\n", dest1);
// 	return (0);
// }

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	total_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	total_len = dest_len + src_len;	// represents the length the string would have if size were large enough.
	if (size <= dest_len)
		return (src_len + size);
	while (*src != '\0' && dest_len < size - 1)
	{
		dest[dest_len] = *src;
		dest_len++;
		src++;
	}
	dest[dest_len] = '\0';
	return (total_len);
}
