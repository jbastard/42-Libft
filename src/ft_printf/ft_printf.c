/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-06 20:30:32 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-06 20:30:32 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../include/libft.h"
#include "../../include/ft_printf.h"

static int	printif(const char param, va_list	args)
{
	if (param == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (param == 's')
		return (ft_putlstr(va_arg(args, char *)));
	if (param == 'p')
		return (ft_putlvoid(va_arg(args, uintptr_t)));
	if (param == 'd' || param == 'i')
		return (ft_putlnbr(va_arg(args, int)));
	if (param == 'u')
		return (ft_putlunbr(va_arg(args, unsigned int)));
	if (param == 'x' || param == 'X')
		return (ft_need_hex(va_arg(args, unsigned int), param));
	if (param == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *param, ...)
{
	size_t	i;
	size_t	len;
	va_list	args;

	va_start(args, param);
	i = 0;
	len = 0;
	while (param[i])
	{
		if (param[i] == '%')
		{
			len += printif(param[i + 1], args);
			i += 2;
		}
		else
			len += ft_putchar(param[i++]);
	}
	va_end(args);
	return (len);
}
