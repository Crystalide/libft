/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:10 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/08 14:26:02 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int		ft_atoi(const char *str);

int	main(void)
{
	const char	str[] = "   ----+-21474836sbajhe765";
	const char	str1[] = "   -21474836sbajhe765";

	printf("The converted number is %d.\n", ft_atoi(str));
	printf("The converted number is %d.\n", ft_atoi(str1));
	return (0);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long int	number;

	sign = 1;
	number = 0;
	while ((*str <= 13 && *str >= 9) || *str == 32)
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + *str - 48;
		if (number * sign > INT_MAX)
			return (INT_MAX);
		if (number * sign < INT_MIN)
			return (INT_MIN);
		str++;
	}
	return (number * sign);
}
