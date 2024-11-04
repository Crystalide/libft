/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:11:56 by ndufourn          #+#    #+#             */
/*   Updated: 2024/11/04 16:39:59 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);
// creates a new string by concatenating two given strings, s1 and s2.

// concatenates s1 and s2 by allocating enough memory for both,
// copying s1 into the new string, then appending s2.
// It returns a pointer to this new string, or NULL if memory allocation fails.

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "World";
// 	char	*res;

// 	res = ft_strjoin(str1, str2);
// 	if (res == NULL)
// 		printf("Memory not allocated.\n");
// 	else
// 		printf("Memory successfully allocated.\n"
// 			"String 1: %s\nString 2: %s\nJoined string: %s\n", str1, str2, res);
// 	free(res);
// 	return (0);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s1) + ft_strlen(s2);	// calculate total len to allocate enough memory for new_str
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, ft_strlen(s1) + 1);
	// copies s1 to new_str with a size argument of ft_strlen(s1) + 1, including the null terminator.
	ft_strlcpy(new_str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	// new_str + ft_strlen(s1) moves the pointer to the end of s1 within new_str.
	// copies s2 into this position, with a size argument of ft_strlen(s2) + 1, ensuring s2 and its null terminator are appended to new_str.
	return (new_str);
}
