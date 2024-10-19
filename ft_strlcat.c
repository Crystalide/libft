/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:52 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/17 18:55:45 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
// #include <bsd/string.h>

// int	main(void)
// {
// 	char	dest[] = "Hello";
// 	char	src[] = "World";

// 	printf("Source: %s\n", dest);
// 	printf("Destination: %s\n", src);
// 	printf("Result of concatenation: %zu\n", ft_strlcat(dest, src, 10));
// 	printf("Result of concatenation: %zu\n", strlcat(dest, src, 10));
// 	printf("Result of concatenation: %s\n", dest);
// 	return (0);
// }

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	src_length;

	dest_length = 0;
	src_length = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (size <= dest_length)
		return (src_length + size);
	while (*src != '\0' && dest_length < size - 1)
	{
		dest[dest_length] = *src;
		dest_length++;
		src++;
	}
	dest[dest_length] = '\0';
	return (dest_length + src_length);
}
