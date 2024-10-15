/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:52 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/15 18:24:54 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft/libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "World";

	printf("Source: %s\n", dest);
	printf("Destination: %s\n", src);
	printf("Result of concatenation: %s\n", ft_strlcat(dest, src, 10));
	return (0);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}