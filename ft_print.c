/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <dgomez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:54:14 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/19 18:01:46 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checks(va_list va, char c)
{
	int	count;

	if (c == 'c')
		count = ft_putchar(va_arg(va, int));
	else if (c == 's')
		count = (ft_putstr(va_arg(va, char *)));
	else if (c == 'd' || c == 'i')
		count = (ft_sputnbr(va_arg(va, int)));
	else if (c == 'u')
		count = ft_uputnbr(va_arg(va, unsigned int), DEC);
	else if (c == 'x')
		count = ft_uputnbr(va_arg(va, unsigned int), HEXM);
	else if (c == 'X')
		count = ft_uputnbr(va_arg(va, unsigned int), HEXU);
	else if (c == 'p')
	{
		count = ft_putstr("0x");
		count += ft_uputnbr((unsigned long)va_arg(va, void *), HEXM);
	}
	else if (c == '%')
		count = ft_putchar('%');
	else
		count = write(1, &c, 1);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		len;
	va_list	va;

	len = 0;
	va_start(va, s);
	while (*s)
	{
		if (*s == '%')
			len += ft_checks(va, *(++s));
		else
			len += ft_putchar(*s);
		s++;
	}
	va_end(va);
	return (len);
}
