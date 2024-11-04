/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:00 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 16:45:45 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);
// safely copies n bytes from one memory location to another, handling overlapping memory regions.

// initializes pointers to the destination and source memory blocks as unsigned char* and const unsigned char*, respectively, for byte-level access.
// It checks if the source and destination pointers are the same or if n is 0, returning dest if true.
// If the source is at a higher address than the destination, it copies bytes forward.
// If the source is at a lower address, it copies bytes backward to avoid overwriting.
// It returns the original destination pointer after the copying is complete.
// This function is essential for safely handling memory operations in C, especially when the source and destination areas might overlap.

// int	main(void)
// {
// 	char	src[] = "HelloWorld";
// 	char	dest[20];

// 	printf("Source: %s\nDestination: %s\n", src, dest);
// 	ft_memmove(src + 5, src, 5);
// 	printf("Source: %s\nDestination: %s\n", src, dest);
// 	ft_memmove(dest, src, 10);
// 	printf("Source: %s\nDestination: %s\n", src, dest);
// 	return (0);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*temp_dest;
	const unsigned char		*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (const unsigned char *)src;
	if (temp_src == temp_dest || n == 0)
		return (dest);
	if (temp_src > temp_dest)		// checks for overlapping memory (if src is at higher address than dest)
	{
		while (n-- > 0)				// if true, copy n bytes of src to dest
			*temp_dest++ = *temp_src++;
	}
	else
	{
		temp_src = temp_src + n;	// if false bcs src is at lower address than dest, move src and dest by n to point to the end of their respective memories
		temp_dest = temp_dest + n;
		while (n-- > 0)				// copy backwards to avoid overwriting data that hasn't been copied yet
			*--temp_dest = *--temp_src;
	}
	return (dest);
}
