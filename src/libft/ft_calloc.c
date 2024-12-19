/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 15:56:00 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-26 15:56:00 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	unsigned char	*dest;
	size_t			i;

	if (nmenb && size)
	{
		if (nmenb > INT_MAX / size)
			return (NULL);
	}
	i = 0;
	dest = malloc (size * nmenb);
	if (!dest)
		return (0);
	while (i < nmenb * size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	size_t nmenb = 100000;
// 	size_t size = 100000;
// 	if (ft_calloc(nmenb, size))
// 		return printf("OK");
// 	return printf("KO");
// }
