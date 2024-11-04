/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:11:53 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 17:23:57 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char*));
// applies a given function f to each character of a string str, along with the character's index.

//applies a specified function f to each character in str,
// passing the character’s index and a pointer to the character.
// This allows for customized modifications of each character in str based on its position in the string.
// The function modifies str directly.

// void	ft_f(unsigned int i, char *c);

// int	main(void)
// {
// 	char	str[] = "Hello World";

// 	ft_striteri(str, ft_f);
// 	printf("Modified string: %s\n", str);
// 	return (0);
// }

// void	ft_f(unsigned int i, char *c)
// {
// 	printf("%i, %c", i, *c);
// 	*c = *c + 32;
// }

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		f(i, str);
// Apply Function f:
// The function f is called with two arguments:
// i: the current index.
// str: a pointer to the current character in str.
// This applies f to the current character, allowing f to modify str[i] if desired.
		str++;
		i++;
	}
}
