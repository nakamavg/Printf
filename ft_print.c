/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <dgomez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:54:14 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/17 23:28:52 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 static int ft_checks(va_list va, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(va, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(va, char *)));
	
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(va, int)));
	
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

size_t	ft_printf(const char *s, ...)
{
	int	len;
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
