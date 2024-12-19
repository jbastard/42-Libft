/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-10 13:42:03 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-10 13:42:03 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"
#include "../../include/ft_printf.h"

int	ft_putchar(int c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

int	ft_putlstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ((write(STDOUT_FILENO, "(null)", 6)));
	while (s[i])
		ft_putchar(s[i++]);
	return (ft_strlen(s));
}
