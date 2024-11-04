/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:56 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 16:32:15 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n);
// compares two blocks of memory byte by byte.

// function returns an integer:
// 0 if the two memory blocks are equal.
// A positive value if the first non-matching byte in s1 is greater than in s2.
// A negative value if the first non-matching byte in s1 is less than in s2.

// initializes pointers to the memory blocks as const unsigned char*.
// Checks if n is 0, returning 0 if true, indicating that the blocks are equal.
// It iterates through the specified number of bytes, comparing each corresponding byte.
// If it finds a difference, it returns the difference between the first non-matching bytes.
// If all compared bytes are equal, it returns 0.
// Useful for comparing binary data or strings in C, esp when lengths of strings or data blocks are unknown in advance.

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "hello";
// 	char	str3[] = "helloworld";

// 	printf("Result 1: %i\n", ft_memcmp(str1, str2, 7));
// 	printf("Result 2: %i\n", ft_memcmp(str1, str3, 5));
// 	printf("Result 3: %i\n", ft_memcmp(str3, str1, 6));
// 	printf("Result 4: %i\n", ft_memcmp(str1, str3, 9));
// 	printf("Result 1: %i\n", memcmp(str1, str2, 7));
// 	printf("Result 2: %i\n", memcmp(str1, str3, 5));
// 	printf("Result 3: %i\n", memcmp(str3, str1, 6));
// 	printf("Result 4: %i\n", memcmp(str1, str3, 9));
// 	return (0);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*temp_s1;
	const unsigned char	*temp_s2;

	temp_s1 = (const unsigned char *)s1;
	temp_s2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n-- > 1 && (*temp_s1 == *temp_s2))	// n is greater than 1 (to ensure there are at least two bytes to compare).
	{
		temp_s1++;
		temp_s2++;
	}
	return (*temp_s1 - *temp_s2);
}
