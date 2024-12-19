/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 12:13:10 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-21 12:13:10 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	while (n--)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}

// int	main(void)
// {
// 	size_t n = 5;
// 	unsigned char dest[n];
// 	printf("%s\n", ((char *) ft_memcpy(dest, "memcheck", n)));
// 	printf("%s", ((char *) memcpy(dest, "memcheck", n)));
// }
