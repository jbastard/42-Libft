/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 17:14:31 by jbastard          #+#    #+#             */
/*   Updated: 2024-10-26 17:14:31 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_a(unsigned int d, char *c)
// {
// 	*c = 'a';
// }

// int main(void)
// {
// 	char str[] = "JESUI45SENMAJ8";
// 	ft_striteri(str, ft_a);
// 	printf("%s", str);
// }
