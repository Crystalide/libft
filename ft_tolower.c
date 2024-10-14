/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:10:01 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/14 13:56:16 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	char	string[] = "HelloWorld";

// 	printf("%s\n", ft_strlowcase(string));
// 	return (0);
// }

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str - ('A' - 'a');
		}
		str++;
	}
	return (temp);
}