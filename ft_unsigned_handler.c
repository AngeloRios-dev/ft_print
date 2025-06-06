/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_handler.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 18:56:47 by angrios           #+#    #+#             */
/*   Updated: 2025/06/06 19:26:20 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
