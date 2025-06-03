/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:10:06 by angrios           #+#    #+#             */
/*   Updated: 2025/06/03 16:37:08 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(unsigned long num)
{
	char	*hex_digits;
	int		count;

	count = 0;
	hex_digits = "0123456789abcdef";
	if (num >= 16)
		count += ft_puthex(num / 16);
	ft_putchar_fd(hex_digits[num % 16], 1);
	count++;
	return (count);
}

int	ft_ptr_handler(void *ptr)
{
	int				count;

	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	count = 0;
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_puthex((unsigned long)ptr);
	return (count);
}
