/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbastard <jbastard@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-13 16:57:38 by jbastard          #+#    #+#             */
/*   Updated: 2024-11-13 16:57:38 by jbastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putlstr(char	*s);
int	ft_putlvoid(uintptr_t n);
int	ft_putlnbr(int n);
int	ft_putlunbr(unsigned int n);
int	ft_need_hex(unsigned int deci, int param);
int	ft_printperc(void);

#endif
