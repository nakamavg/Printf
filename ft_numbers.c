/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <dgomez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:53:29 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/19 18:01:09 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_sputnbr(long n)

{
	if (n < 0)
		return (ft_putchar('-') + ft_uputnbr(-n, DEC));
	else
		return (ft_uputnbr(n, DEC));
}

int	ft_uputnbr(unsigned long num, char *base)
{
	size_t	base_len;
	int		len;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	len = 0;
	if (num >= base_len)
		len += ft_uputnbr(num / base_len, base);
	len += ft_putchar(base[num % base_len]);
	return (len);
}
