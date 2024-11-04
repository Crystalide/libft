/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:23 by ndufourn          #+#    #+#             */
/*   Updated: 2024/11/04 16:37:45 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size);
// allocates memory for an array of count elements each of size bytes and initializes all bytes to zero.

// It performs the following steps:
// Checks for potential overflow in the allocation size calculation.
// Allocates memory using malloc.
// Checks if the memory allocation was successful.
// Initializes the allocated memory to zero using ft_bzero.
// Returns a pointer to the allocated memory, or NULL if any step fails.

// int	main(void)
// {
// 	int	*test1 = (int *)ft_calloc(10, sizeof(int));
// 	// int	*test1 = calloc(10, sizeof(int));
// 	if (test1 == NULL)
// 		printf("Memory not allocated.\n");
// 	else
// 		printf("Memory successfully allocated.\n");
// 	free(test1);
// 	return (0);
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > __SIZE_MAX__ / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
