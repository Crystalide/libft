/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:09:52 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/14 13:56:07 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strcat(char *dest, char *src);

// int	main(void)
// {
// 	char	dest[] = "Hello";
// 	char	src[] = "World";

// 	printf("Source: %s\n", dest);
// 	printf("Destination: %s\n", src);
// 	printf("Result of concatenation: %s\n", ft_strcat(dest, src));
// 	return (0);
// }

char	*ft_strcat(char *dest, char *src)
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