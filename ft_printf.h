/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 15:44:13 by angrios           #+#    #+#             */
/*   Updated: 2025/06/09 16:13:18 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_str_handler(char *str);
int	ft_ptr_handler(void *ptr);
int	ft_int_handler(int num);
void	ft_print_unsigned(unsigned int n);
int	ft_unsigned_handler(unsigned int num);
int	ft_print_hex(unsigned long num, int x_type);
int	ft_hex_handler(unsigned int num, char specifier);

#endif