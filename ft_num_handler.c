/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 21:25:23 by angrios           #+#    #+#             */
/*   Updated: 2025/06/07 18:48:28 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_handler(int num)
{
	int		count;
	long	temp;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		count++;
		temp = -(long)num;
	}
	else
		temp = num;
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	ft_putnbr_fd(num, 1);
	return (count);
}

static void	ft_print_unsigned(unsigned int n)
{
	if (n >= 10)
		ft_print_unsigned(n / 10);
	ft_putchar_fd((n % 10) + '0', 1);
}

int	ft_unsigned_handler(unsigned int num)
{
	int				count;
	unsigned int	temp;

	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	count = 0;
	temp = num;
	while (temp > 0)
	{
		temp /= 10;
		count++;
	}
	ft_print_unsigned(num);
	return (count);
}

int	ft_hex_handler(unsigned int num, char specifier)
{
	int	count;

	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	count = 0;
	if (specifier == 'X')
		count += ft_print_hex(num, 1);
	else
		count += ft_print_hex(num, 0);
	return (count);
}
