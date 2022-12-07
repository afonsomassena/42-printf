/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:12:20 by afgoncal          #+#    #+#             */
/*   Updated: 2022/12/06 15:30:11 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEXMIN "0123456789abcdef"
# define HEXMAX "0123456789ABCDEF"
# define DECIMAL "0123456789"

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <limits.h>

char	ft_putchar(char c);
int		ft_putstr(char *str);
char	*ft_strchr(const char *str, int c);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
int		ft_printf(const char *str, ...);

#endif