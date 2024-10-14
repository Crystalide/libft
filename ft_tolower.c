/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:10:01 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/14 18:14:09 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_strlowcase(int c);

int	main(void)
{
	int	string[] = "HelloWorld";

	printf("%s\n", ft_strlowcase(string));
	return (0);
}

int	*ft_strlowcase(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - ('A' - 'a');
	return (c);
}

int	ft_isalpha(int c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (0);
	return (1);
}