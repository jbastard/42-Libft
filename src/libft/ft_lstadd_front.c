/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 13:19:55 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-05 13:19:55 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int main()
// {
// 	t_list	*new = malloc(sizeof(t_list));
// 	if (!new)
// 		return(0);
// 	new->content = "content updated";

// 	t_list	*lst;
// 	ft_lstadd_front(&lst, new);
// 	printf("%s\n", lst->content);
// 	free(new);
// }
