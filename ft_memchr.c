/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:54 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 16:27:55 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n);
// searches for the first occurrence of a specified character in a block of memory.

// initializes a pointer to the memory block as const unsigned char*.
// It iterates through the specified number of bytes (n), comparing each byte to the target character c.
// If a match is found, it returns a pointer to that memory location.
// If no match is found after searching the entire block, it returns NULL.
// This function is useful for locating characters within binary data or strings in C.

// int	main(void)
// {
// 	char	str[] = "HelloWorld";
// 	char	*test1 = ft_memchr(str, 'o', 5);

// 	if (test1 != NULL)
// 		printf("Found char at position: %ld\n", test1 - str);
// 	else
// 		printf("Char not found in string\n");
// 	return (0);
// }

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*temp;

	temp = (const unsigned char *)str;
	while (n-- > 0)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
	}
	return (NULL);
}
