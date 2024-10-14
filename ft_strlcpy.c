/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:54 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/14 18:03:31 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	main(void)
{
	char	source[] = "HelloWorld";
	char	destination[20];

	printf("Source: %s\nDestination: %s\n", source, destination);
	ft_strlcpy(destination, source, 15);
	printf("Source: %s\nDestination: %s\n", source, destination);
	return (0);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	char	*temp;
	int		length_src;

	temp = src;
	length_src = 0;
	while (*temp != '\0')
	{
		length_src++;
		temp++;
	}
	if (size == 0)
	{
		return (length_src);
	}
	while (size > 1 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (length_src);
}
