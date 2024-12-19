/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-11 14:58:31 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-11 14:58:31 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"
#include "../../include/ft_printf.h"

int	ft_putlnbr(int n)
{
	int	i;

	i = 1;
	if (!n)
		return ((write(STDOUT_FILENO, "0", 1)));
	if (n < 0)
	{
		write (1, "-", 1);
		i++;
		n *= -1;
	}
	ft_putunbr(n);
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_putlunbr(unsigned int n)
{
	int	i;

	i = 1;
	if (!n)
		return ((write(STDOUT_FILENO, "0", 1)));
	ft_putunbr(n);
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}
