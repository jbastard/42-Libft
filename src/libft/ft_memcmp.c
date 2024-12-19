/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 13:42:31 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-28 13:42:31 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n--)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	char s1[] = "test1";
// 	char s2[] = "test0";
// 	size_t	n = 5;
// 	printf("%d\n",ft_memcmp(s1, s2, n));
// 	printf("%d",memcmp(s1, s2, n));
// }
