/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndufourn <ndufourn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:23:28 by ndufourn          #+#    #+#             */
/*   Updated: 2024/10/31 13:40:17 by ndufourn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

// int	main(void)
// {
// 	char	str[] = "HelloWorld";
// 	t_list	*test1 = ft_lstnew(str);

// 	if (test1 != NULL)
// 		printf("New node: %s\n", (char *)test1->content);
// 	else
// 		printf("Node creation failed\n");
// 	free(test1);
// 	return (0);
// }


t_list *ft_lstnew(void *content)
{
    // Allocate memory for a new node
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
    
    // Check if malloc succeeded
	if (!new_node)
		return (NULL);

    // Initialize the content of the node
    new_node->content = content;

    // Set the next pointer to NULL, as this is a standalone node for now
    new_node->next = NULL;

    // Return the created node
    return (new_node);
}

