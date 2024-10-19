/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:43 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/19 18:57:30 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

// int	main(void)
// {
// 	char	str[] = "HelloWorld";
// 	char	*test1 = ft_strchr(str, 'H');

// 	if (test1 != NULL)
// 		printf("Found char at position: %ld\n", test1 - str);
// 	else
// 		printf("Char not found in string\n");
// 	return (0);
// }

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
