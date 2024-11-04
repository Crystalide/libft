/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:10:00 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 17:17:35 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c);
// searches for the last occurrence of a char c in a string str and returns a pointer to it. 

// iterates through str, updating a pointer to the most recent occurrence of c.
// When it reaches the end, it returns a pointer to the last occurrence of c, or NULL if c is not found.
// If c is the null terminator, the function returns a pointer to the end of the string.

// int	main(void)
// {
// 	char	str[] = "HelloWorld";
// 	char	*test1 = ft_strrchr(str, 'l');

// 	if (test1 != NULL)
// 		printf("Found char at position: %ld\n", test1 - str);
// 	else
// 		printf("Char not found in string\n");
// 	return (0);
// }

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occ;

	last_occ = NULL;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			last_occ = str;
		str++;
	}
	if ((unsigned char) c == '\0')
		return ((char *)str);
	return ((char *)last_occ);
}
