/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkeskin <kkeskin@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 23:44:29 by kkeskin           #+#    #+#             */
/*   Updated: 2025/06/16 23:44:30 by kkeskin          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define INT_MIN (-214748364 - 1)
# define HEXA_UPPER "0123456789ABCDEF"
# define HEXA_LOWER "0123456789abcdef"
# define DECIMAL "0123456789"

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int ft_putnbr(int n);
int ft_putadress(void *p);
int ft_puthexaup(unsigned int i);
int ft_puthexalow(unsigned int i);
int ft_putunsdecim(unsigned int i);

#endif
