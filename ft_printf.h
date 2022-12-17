/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:12:20 by afgoncal          #+#    #+#             */
/*   Updated: 2022/12/17 13:46:52 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXMIN "0123456789abcdef"
# define HEXMAX "0123456789ABCDEF"

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

char		ft_putchar(char c);
int			ft_putstr(char *str);
char		ft_printpointer(unsigned long long num, int *flength);
int			ft_putnbr(long long num, int base, int status);
int			ft_putnbrun(int n);
int			ft_printf(const char *str, ...);
static void	ft_printarg(char c, va_list ap, int *flength);



#endif