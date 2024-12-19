/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 13:19:28 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-05 13:19:28 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew("Node 1"));
// 	ft_lstadd_back(&lst, ft_lstnew("Node 2"));
// 	ft_lstadd_back(&lst, ft_lstnew("Node 3"));

// 	t_list *last = ft_lstlast(lst);
// 	printf("dernier element est : %s", (char *)last->content);
// }
