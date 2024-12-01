/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-boul <ael-boul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:48:34 by ael-boul          #+#    #+#             */
/*   Updated: 2024/12/01 17:34:29 by ael-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nbr)
{
	int count = 0;
	char c;
	if (nbr <= 9)
	{
		c = (nbr % 10) + '0';
		count += write(1, &c, 1);
	}
	if (nbr >= 10)
	{
		count += ft_putnbr_u(nbr / 10);
		c = (nbr % 10) + '0';
		count += write(1, &c, 1);
	}
	return (count);
}