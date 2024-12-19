/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 12:13:21 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-21 12:13:21 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		((unsigned char *)s)[n] = 0;
}

// int main(void)
// {
// 	size_t	n = 16;
// 	char	str[n];
// 	ft_bzero(str, n);
// 	int i = 0;
// 	while (i < n)
// 	{
// 		printf("%d", (char)str[i]);
// 		i++;
// 	}
// 		printf("\n");
// 	char	stri[n];
// 	bzero(stri, n);
// 	i = 0;
// 	while (i < n)
// 	{
// 		printf("%d", (char)str[i]);
// 		i++;
// 	}
// }
