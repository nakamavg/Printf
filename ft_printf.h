/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <dgomez-m@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:22:05 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/17 23:29:09 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H 

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *c);
size_t	ft_putnbr(int n);
size_t	ft_printf(const char *s, ...);
size_t	ft_strlen(const char *s);


#endif
