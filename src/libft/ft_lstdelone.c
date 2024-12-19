/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 13:19:20 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-05 13:19:20 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// void	del(void *lst)
// {
// 	free(lst);
// }

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("Node 1")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("Node 2")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("Node 3")));

// 	t_list *temp = lst;
// 	while (temp)
// 	{
// 		printf("%s\n", (char*)temp->content);
// 		temp = temp->next;
// 	}
// 	printf("\n");
// 	ft_lstdelone(ft_lstlast(lst), del);
// 	while (lst)
// 	{
// 		printf("%s\n", (char*)lst->content);
// 		lst = lst->next;
// 	}
// }
