/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:22:05 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/18 11:57:46 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *c);
size_t	ft_putnbr(int n);
size_t	ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);

#endif
