/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 20:11:05 by angrios           #+#    #+#             */
/*   Updated: 2025/06/09 17:39:20 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_print_hex(unsigned long num, int is_uppercase)
// {
// 	char	*upper_hex;
// 	char	*lower_hex;
// 	int		count;

// 	count = 0;
// 	upper_hex = "0123456789ABCDEF";
// 	lower_hex = "0123456789abcdef";
// 	if (num >= 16)
// 		count += ft_print_hex((num / 16), is_uppercase);
// 	if (is_uppercase == 1)
// 		ft_putchar_fd(upper_hex[num % 16], 1);
// 	else
// 		ft_putchar_fd(lower_hex[num % 16], 1);
// 	return (++count);
// }

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

// void	ft_print_unsigned(unsigned int n)
// {
// 	if (n >= 10)
// 		ft_print_unsigned(n / 10);
// 	ft_putchar_fd((n % 10) + '0', 1);
// }
