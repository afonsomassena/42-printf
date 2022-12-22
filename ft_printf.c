/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afgoncal <massenaafonso1@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:52:56 by afgoncal          #+#    #+#             */
/*   Updated: 2022/12/22 14:43:05 by afgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			len += ft_printarg(str[i], ap);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

int	ft_printarg(char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar((char)va_arg(ap, int));
	else if (c == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		len += ft_printpointer(va_arg(ap, unsigned long long), 16);
	else if (c == 'd' && c == 'i')
		len += ft_putnbr((long long)va_arg(ap, int), 10, 1);
	else if (c == 'u')
		len += ft_putnbrun(va_arg(ap, unsigned int));
	else if (c == 'x')
		len += ft_putnbr(va_arg(ap, unsigned int ), 16, 1);
	else if (c == 'X')
		len += ft_putnbr(va_arg(ap, unsigned int ), 16, 2);
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

// int	main(void)
//  {
// 	void	*ptr = NULL;
// 	printf("meu x = %d\n", ft_printf("%x\n", 12345678));
// 	printf("teu x = %d\n", printf("%x\n", 12345678));
// 	ft_printf("%d\n", 12345678);
// 	printf("%d\n", 12345678);
// 	ft_printf("%s\n", "hello");
// 	printf("%s\n", "hello");
// 	ft_printf("%X\n", 12345678);
// 	printf("%X\n", 12345678);
// 	printf("meu c = %d\n", ft_printf("%c\n", '0'));
// 	printf("teu c = %d\n", printf("%c\n", '0'));
// 	ft_printf("%p\n", &ptr);
// 	printf("%p\n", &ptr);
// }
