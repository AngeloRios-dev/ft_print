/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:09:04 by angrios           #+#    #+#             */
/*   Updated: 2025/06/03 16:33:32 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_char_handler((char)va_arg(args, int)));
	else if (specifier == 's')
	{
		return (ft_string_handler((char *)va_arg(args, char *)));
	}
	else if (specifier == 'p')
		return (ft_ptr_handler(va_arg(args, void *)));
	return (0);
}
