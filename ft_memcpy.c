/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:58 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 16:33:45 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);
// copies a specified number of bytes from one memory location to another.

// initializes pointers to the destination and source memory blocks as unsigned char* and const unsigned char*, respectively, for byte-level access.
// It iterates through the specified number of bytes (n), copying each byte from the source to the destination.
// It returns the original destination pointer after the copying is complete.
// This function is widely used in C programming for copying data from one memory location to another, such as in handling strings, arrays, or binary data.

// int	main(void)
// {
// 	char	src[] = "HelloWorld";
// 	char	dest[20];

// 	printf("Source: %s\nDestination: %s\n", src, dest);
// 	ft_memcpy(dest, src, 15);
//	memcpy(NULL, NULL, 5);
// 	printf("Source: %s\nDestination: %s\n", src, dest);
// 	return (0);
// }

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*temp_dest;
	const unsigned char		*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	while (n-- > 0)
		*temp_dest++ = *temp_src++;
	return (dest);
}
