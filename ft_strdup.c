/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:47 by ndufourn          #+#    #+#             */
/*   Updated: 2024/11/04 16:41:19 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str);
// creates a duplicate of str by allocating memory for new string and copying the contents from str into this newly allocated space. 

// duplicates a string by allocating memory for a new string, copying the contents of str to it,
// and returning a pointer to the new string.
// If memory allocation fails, it returns NULL.

// int	main(void)
// {
// 	char	original[] = "HelloWorld";
// 	char	*duplicate;

// 	duplicate = ft_strdup(original);
// 	if (duplicate == NULL)
// 		printf("Memory not allocated.\n");
// 	else
// 		printf("Memory successfully allocated.\n"
// 			"Original: %s\nDuplicate: %s\n", original, duplicate);
// 	free(duplicate);
// 	return (0);
// }

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*duplicate;

	len = ft_strlen(str);	// strlen gives length of str excluding null terminator
	duplicate = malloc((len + 1) * sizeof(char));
	if (duplicate != NULL)
		ft_strlcpy(duplicate, str, len + 1);
	return (duplicate);
}
