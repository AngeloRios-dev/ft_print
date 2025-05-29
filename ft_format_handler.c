/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:09:04 by angrios           #+#    #+#             */
/*   Updated: 2025/05/29 20:08:58 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_format_handler(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_char_handler((char)va_arg(args, int)));
	else if (specifier == 's')
	{
		return (ft_string_handler((char *)va_arg(args, char *)));
	}
	return (0);
}
