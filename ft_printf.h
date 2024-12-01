/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-boul <ael-boul@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */

/*   Created: 2024/11/25 16:29:06 by ael-boul          #+#    #+#             */
/*   Updated: 2024/12/01 01:09:53 by ael-boul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_puthex(unsigned long n, char c);
int ft_check_char(char chr, va_list args);
int ft_putnbr(int nbr);
int ft_putnbr_u(unsigned int nbr);
int ft_putaddress(void *p);

#endif