/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:10:03 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/14 18:39:38 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_toupper(int c);

// int	main(void)
// {
// 	char	string[] = "HelloWorld";

// 	printf("%s\n", ft_toupper(string));
// 	return (0);
// }

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}
