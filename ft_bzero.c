/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:20 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 16:13:27 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n);
// set a block of memory to zero

// sets n bytes of memory, starting from location pointed to by str, to zero.
// It works by:
// Casting the input pointer to an unsigned char* for byte-level access.
// Using a loop to set each byte to zero until n bytes have been processed.
// typically used to clear a block of memory, making it safe for later use.

// int	main(void)
// {
// 	char	buffer[] = "xxOx";
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
	unsigned char	*temp;			// unsigned char* used to manipulate individual bytes of memory

	temp = (unsigned char *)str;
	while (n-- > 0)
	{
		*temp++ = 0;
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
