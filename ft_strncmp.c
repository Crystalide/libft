/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:34:26 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/08 18:00:22 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "hello";
// 	char	str3[] = "helloworld";

// 	printf("Result 1: %i\n", ft_strncmp(str1, str2, 7));
// 	printf("Result 2: %i\n", ft_strncmp(str1, str3, 5));
// 	printf("Result 3: %i\n", ft_strncmp(str3, str1, 6));
// 	printf("Result 4: %i\n", ft_strncmp(str1, str3, 9));
// 	return (0);
// }

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (n-- > 1 && *s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}