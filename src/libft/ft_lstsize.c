/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 13:19:43 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-05 13:19:43 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

// int main(void)
// {
// 	t_list	*lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew("Node 1"));
// 	ft_lstadd_back(&lst, ft_lstnew("Node 2"));
// 	ft_lstadd_back(&lst, ft_lstnew("Node 3"));

// 	printf("%d elements dans la liste", ft_lstsize(lst));
// }
