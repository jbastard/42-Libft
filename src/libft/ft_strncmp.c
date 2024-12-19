/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 13:44:17 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-28 13:44:17 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// // 	char *s1 = "Comparez2";
// // 	char *s2 = "Comparez1";
// // 	size_t n = 9;

// 	unsigned char s1[10] = "abcdef";
// 	unsigned char s2[10] = "abc\xfdxx";

// 	s1[3] = 0;
// 	s2[3] = 0;

// 	printf("%d\n", ft_strncmp((const char *)s1, (const char *)s2, n));
// 	printf("%d\n", strncmp((const char *)s1, (const char *)s2, n));
// }
