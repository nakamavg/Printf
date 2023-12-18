/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <dgomez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:30:36 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/18 13:31:48 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *c);
size_t	ft_putnbr(int n);
size_t	ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);

#endif
