/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <dgomez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:36 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/19 17:57:58 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define HEXM "0123456789abcdef"
# define HEXU "0123456789ABCDEF"
# define DEC "0123456789"

int	ft_putchar(char c);
int	ft_putstr(char *c);
int	ft_putnbr(int n);
int	ft_printf(const char *s, ...);
int	ft_sputnbr(long n);
int	ft_uputnbr(unsigned long num, char *base);

#endif
