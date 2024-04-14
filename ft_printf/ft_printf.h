/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atorregr <atorregr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:49:49 by atorregr          #+#    #+#             */
/*   Updated: 2024/02/20 16:45:54 by atorregr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(char const *s, ...);
int		ft_print_char(char const c, int count);
int		ft_print_str(char const *s, int count);
int		ft_print_digits(int n, int count);
int		ft_print_ptr(void *ptr, int count);
int		ft_print_unsigned(unsigned int n, int count);
int		ft_print_hexa_low(unsigned int hexa, int count);
int		ft_print_hexa_up(unsigned int hexa, int count);

#endif
