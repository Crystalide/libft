/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:43 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 17:15:15 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c);
// searches for the first occurrence of a character c in the string str and returns a pointer to it.

//iterates through each character in str,
// returning a pointer to the matching character or NULL if it’s not found.
// If c is the null terminator, the function will return a pointer to the end of the string.

// int	main(void)
// {
// 	char	str[] = "teste";
// 	char	*test1 = ft_strchr(str, '\0');

// 	// if (test1 != NULL)
// 	// 	printf("Found char at position: %ld\n", test1 - str);
// 	// else
// 	// 	printf("Char not found in string\n");
// 	printf("Found char at position: %p\n", (void *)str);
// 	printf("Found char at position: %p\n", (void *)test1);
// 	printf("Found char at position: %ld\n", test1 - str);
// 	return (0);
// }

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)str);
	return (NULL);
}
