/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-boul <ael-boul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:09:24 by ael-boul          #+#    #+#             */
/*   Updated: 2024/12/01 17:34:23 by ael-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char c)
{
	int		count;
	char	*arr;

	count = 0;
	if (c == 'x')
		arr = "0123456789abcdef";
	else if (c == 'X')
		arr = "0123456789ABCDEF";
	else
		return (count);
	if (n < 16)
	{
		count += ft_putchar(arr[n]);
	}
	else
	{
		count += ft_puthex(n / 16, c);
		count += ft_putchar(arr[n % 16]);
	}
	return (count);
}
