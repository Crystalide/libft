/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:02 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/14 14:06:22 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

// void	*ft_memset(void *str, int c, size_t n);

// int	main(void)
// {
// 	char	str[] = "x0o0x";

// 	printf("Before buffering: %s\n", str);
// 	ft_memset(str, '3', 4);
// 	printf("After buffering: %s\n", str);
// 	return (0);
// }

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (n-- > 0)
	{
		*temp = (unsigned char) c;
		temp++;
	}
	return (str);
}
