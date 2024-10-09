/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:27 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/09 21:40:03 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_isalnum(int c);

// int	main(void)
// {
// 	char	char1 = 'H';
// 	char	char2 = '1';
// 	char	char3 = '@';
// 	char	char4 = ' ';

// 	printf("%d\n", ft_isalnum(char1));
// 	printf("%d\n", ft_isalnum(char2));
// 	printf("%d\n", ft_isalnum(char3));
// 	printf("%d\n", ft_isalnum(char4));
// 	return (0);
// }

int	ft_isalnum(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
		return (0);
	return (1);
}
