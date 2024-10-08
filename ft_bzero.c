/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:20 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/08 17:59:47 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <strings.h>

// void	ft_bzero(void *str, size_t n);
// size_t	ft_strlen(const char *str);

// int	main(void)
// {
// 	char	buffer[] = "xxx";
// 	int		length = ft_strlen(buffer);
// 	int		i = 0;

// 	printf("Before buffering: %s\n", buffer);
// 	ft_bzero(buffer, length);
// 	while (i++ < length)
// 		printf("After buffering: %d\n", buffer[i]);
// 	return (0);
// }

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (n-- > 0)
	{
		*temp = 0;
		temp++;
	}
}

// size_t	ft_strlen(const char *str)
// {
// 	int	n;

// 	n = 0;
// 	while (*str != '\0')
// 	{
// 		str++;
// 		n++;
// 	}
// 	return (n);
// }
