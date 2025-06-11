/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:11:05 by angrios           #+#    #+#             */
/*   Updated: 2025/06/11 13:33:29 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long num, int is_uppercase)
{
	char	*hex;
	int		count;

	count = 0;
	if (is_uppercase)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (num >= 16)
		count += ft_print_hex(num / 16, is_uppercase);
	ft_putchar_fd(hex[num % 16], 1);
	return (++count);
}
