/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:02 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 16:50:01 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n);
// fills a block of memory with a specified value.

//initializes a pointer to the memory block as unsigned char* for byte-level access.
// It iterates through the specified number of bytes (n), setting each byte to the value of c.
// It returns the original pointer to the memory block after the filling is complete.
// used to initialize memory to a specific value, such as setting an array to zero or a specific character.

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
		*temp++ = (unsigned char)c;
	}
	return (str);
}
