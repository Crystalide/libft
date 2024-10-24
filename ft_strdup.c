/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:47 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/24 18:01:22 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	duplicate = malloc(len + 1);
	if (duplicate != NULL)
		ft_strlcpy(duplicate, str, len + 1);
	return (duplicate);
}
