/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:10:01 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/15 12:53:51 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_tolower(int c);

// int	main(void)
// {
// 	char	str[] = "HelloWorld";
// 	char	*temp = str;

// 	while (*temp != '\0')
// 	{
// 		*temp = ft_tolower(*temp);
// 		temp++;
// 	}
// 	printf("%s\n", str);
// 	return (0);
// }

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - ('A' - 'a');
	return (c);
}
