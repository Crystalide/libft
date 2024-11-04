/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 19:11:10 by ndufourn          #+#    #+#             */
/*   Updated: 2024/11/04 16:38:27 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);
static int	ft_len(int n);
static char	*ft_itoa_recursion( char *str, int n, int len);
// void		ft_print_array(int *str, int size, int i);

// convert an integer to a string

// checks for special case of INT_MIN.
// It calculates the necessary length for the string.
// It allocates memory for the string and initializes it.
// It handles negative numbers by storing a minus sign and converting n to positive.
// It calls a recursive function to fill in the digits of the number.
// The helper functions manage the conversion process, counting digits and placing them correctly in the string.
// Result is a null-terminated string representing the integer in decimal form.

// int	main(void)
// {
// 	int		str[] = {42, -42, 0, 123456789, -123456789, INT_MAX, INT_MIN};
// 	int		size = sizeof(str) / sizeof(str[0]);

// 	ft_print_array(str, size, 0);
// 	return (0);
// }

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)					// handle negative numbers. if neg, converts positive value n and negates it
	{
		str[0] = '-';
		n = -n;
	}
	return (ft_itoa_recursion(str, n, len)); // pass string str, positive int n, and length len
}

static char	*ft_itoa_recursion(char *str, int n, int len)
{
	len--;						// decrease length to place digit in correct position
	if (n >= 10)
		ft_itoa_recursion(str, n / 10, len);
	str[len] = (n % 10) + 48;	// adding 48 converts int digit to char and stores it at str[len]
	return (str);
}

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		if (n == 0)
			return (len);
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

// void	ft_print_array(int *str, int size, int i)
// {
// 	char	*test1;

// 	if (i >= size)
// 		return ;
// 	test1 = ft_itoa(str[i]);
// 	if (test1 == NULL)
// 		printf("Memory not allocated.\n");
// 	else
// 		printf("Memory successfully allocated.\n"
// 			"Original: %d\nConverted: %s\n", str[i], test1);
// 	free(test1);
// 	ft_print_array(str, size, i + 1);
// }
