/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 13:43:54 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-28 13:43:54 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	// char	src[] = "Hello, World!";
// 	char	dst[14];
// 	int	result = (ft_strlcpy(dst, "lorem ipsum dolor sit amet", 0));
// 	printf("Chaîne copiée : %s\n", dst);
// 	printf("Longueur totale de src : %d\n", result);
// }
