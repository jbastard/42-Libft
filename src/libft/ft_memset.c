/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 12:12:45 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-21 12:12:45 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	while (n--)
		((unsigned char *)s)[n] = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	unsigned char	s[] = "123456789";
// 	int		c = 1;
// 	size_t	n = 8;
// 	printf("%s\n", (char *)ft_memset(s, c, n));
// 	printf("%s", (char *)memset(s, c, n));
// }
