/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 13:19:32 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-05 13:19:32 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*buff;

	ret = NULL;
	while (lst)
	{
		buff = ft_lstnew(NULL);
		if (!buff)
		{
			ft_lstclear(&ret, del);
			break ;
		}
		buff->content = f(lst->content);
		ft_lstadd_back(&ret, buff);
		lst = lst->next;
	}
	return (ret);
}

// void	*f(void *c)
// {
// 	char *ch = (char *)c;
// 	if (*ch >= 97 && *ch <= 122)
// 		*ch -= 32;
// 	return (ch);
// }

// void	del(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("c")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("b")));
// 	ft_lstadd_back(&lst, ft_lstnew(strdup("a")));

// 	t_list *temp = ft_lstmap(lst, f, del);
// 	while (temp)
// 	{
// 		printf("%s\n", (char*)temp->content);
// 		temp = temp->next;
// 	}
// }
