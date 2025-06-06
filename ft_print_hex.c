/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:11:05 by angrios           #+#    #+#             */
/*   Updated: 2025/06/06 20:34:24 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long num, int is_uppercase)
{
	char	*upper_hex;
	char	*lower_hex;
	int		count;

	count = 0;
	upper_hex = "0123456789ABCDEF";
	lower_hex = "0123456789abcdef";
	if (num >= 16)
		count += ft_print_hex((num / 16), is_uppercase);
	if (is_uppercase == 1)
		ft_putchar_fd(upper_hex[num % 16], 1);
	else
		ft_putchar_fd(lower_hex[num % 16], 1);
	return (++count);
}
