/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:55 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/24 18:04:47 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(void)
// {
// 	const char	string[] = "HelloWorld";
// 	int			len;

// 	len = ft_strlen(string);
// 	printf("Number of characters in string: %d\n", len);
// 	return (0);
// }

size_t	ft_strlen(const char *str)
{
	int	n;

	n = 0;
	while (*str++)
		n++;
	return (n);
}
