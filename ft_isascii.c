/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:08:48 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/15 15:01:27 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

// int	main(void)
// {
// 	printf("%d\n", ft_isascii('H'));
// 	printf("%d\n", ft_isascii('\n'));
// 	printf("%d\n", ft_isascii(-1));
// 	printf("%d\n", ft_isascii(128));
// 	return (0);
// }

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
