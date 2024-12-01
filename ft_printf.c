/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-boul <ael-boul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:02:25 by ael-boul          #+#    #+#             */
/*   Updated: 2024/12/01 23:56:37 by ael-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_char(char chr, va_list args)

{
	int count;

	count = 0;
	if (chr == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (chr == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (chr == 'x')
		count += ft_puthex(va_arg(args, unsigned int), 'x');
	else if (chr == 'X')
		count += ft_puthex(va_arg(args, unsigned int), 'X');
	else if (chr == 'p')
		count += ft_putaddress(va_arg(args, void *));
	else if (chr == 'd' || chr == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (chr == 'u')
		count += ft_putnbr_u(va_arg(args, unsigned int));
	else if (chr == '%')
		count += ft_putchar('%');
	else if (chr == '\0')
		return (0);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			count += ft_check_char(format[i], args);
		}
		else
		{
			count += ft_putchar(format[i]);
		}
		i++;
	}
	if (count < 0)
		return (-1);
	va_end(args);
	return (count);
}
// int main()
// {
// 
// 	int jj = printf("%k", 0);
// 	printf("%d",jj);
// }
