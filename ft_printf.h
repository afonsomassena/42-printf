/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:12:20 by afgoncal          #+#    #+#             */
/*   Updated: 2022/12/22 14:34:59 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_printpointer(unsigned long long num, int base);
int		ft_putnbr(long long num, int base, int status);
int		ft_putnbrun(int n);
int		ft_printf(const char *str, ...);
int		ft_printarg(char c, va_list ap);

#endif