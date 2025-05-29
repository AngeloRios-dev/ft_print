/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:33:24 by angrios           #+#    #+#             */
/*   Updated: 2025/05/29 20:11:42 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int	ft_char_handler(char c)
{
	if (c)
	{
		ft_putchar_fd(c, 1);
		return (1);
	}
	return (0);
}

int	ft_string_handler(char *str)
{
	int	count;

	if (!count)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	count = ft_strlen(str);
	return (count);
}
