/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 13:19:24 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-05 13:19:24 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void	f(void *c)
// {
// 	char *ch = (char *)c;
// 	if (*ch >= 97 && *ch <= 122)
// 		*ch -= 32;
// }

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("c")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("b")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("a")));
// 	ft_lstiter(lst, f);
// 	t_list *temp = lst;
// 	while (temp)
// 	{
// 		printf("%s\n", (char*)temp->content);
// 		temp = temp->next;
// 	}
// }
