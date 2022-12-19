/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:52:56 by afgoncal          #+#    #+#             */
/*   Updated: 2022/12/19 15:40:16 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printarg(char c, va_list ap, int *flength)
{
	char	*str;

	str = 0;
	if (c == 'c')
		*flength += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		*flength += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		str == ft_printpointer(va_arg(ap, unsigned long long));
	else if (c == 'd')
		str == ft_putnbr(va_arg(ap, int));
	else if (c == 'i')
		str == ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		str == ft_putnbrun(va_arg(ap, unsigned int));
	else if (c == 'x')
		str == ft_putnbr(va_arg(ap, unsigned int ), HEXMIN);
	else if (c == 'X')
		str == ft_putnbr(va_arg(ap, unsigned int ), HEXMAX);
	else if (c == '%')
		*flength += ft_putchar('%');
	if (str)
		*flength += ft_putstr(str);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		flength;
	int		i;

	i = 0;
	flength = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i++])
			ft_printarg(str[i], ap, &flength);
		else
			flength += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (flength);
}

// int	main(void)
// {
// 	printf("%x\n", INT_MAX);
// 	ft_printf("%x\n", INT_MAX);
// 	printf("%s\n", "dfgdf");
// 	ft_printf("%s\n", "dfgdf");
// 	printf(" %p ", 16);
// 	ft_printf(" %p ", 16);
// 	printf("%p\n", '0');
// 	ft_printf("%p\n", '0');
// 	printf("NULL %s NULL\n", NULL);
// 	ft_printf("NULL %s NULL\n", NULL);
// 	printf(" %x ", 16);
// 	ft_printf(" %x ", 16);
// }
