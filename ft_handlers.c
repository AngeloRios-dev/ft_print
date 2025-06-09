/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 21:25:23 by angrios           #+#    #+#             */
/*   Updated: 2025/06/09 17:33:20 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_int_handler(int num)
// {
// 	int		count;
// 	long	temp;

// 	count = 0;
// 	if (num == 0)
// 	{
// 		ft_putchar_fd('0', 1);
// 		return (1);
// 	}
// 	if (num < 0)
// 	{
// 		count++;
// 		temp = -(long)num;
// 	}
// 	else
// 		temp = num;
// 	while (temp > 0)
// 	{
// 		temp /= 10;
// 		count++;
// 	}
// 	ft_putnbr_fd(num, 1);
// 	return (count);
// }

int	ft_int_handler(int num)
{
	long	nb;
	int		count;

	nb = num;
	count = 0;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
		count++;
	}
	if (nb >= 10)
		count += ft_int_handler(nb / 10);
	ft_putchar_fd((nb % 10) + '0', 1);
	return (++count);	
}

// int	ft_unsigned_handler(unsigned int num)
// {
// 	int				count;
// 	unsigned int	temp;

// 	if (num == 0)
// 	{
// 		ft_putchar_fd('0', 1);
// 		return (1);
// 	}
// 	count = 0;
// 	temp = num;
// 	while (temp > 0)
// 	{
// 		temp /= 10;
// 		count++;
// 	}
// 	ft_print_unsigned(num);
// 	return (count);
// }

int	ft_unsigned_handler(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_unsigned_handler(num / 10);
	ft_putchar_fd((num % 10) + '0', 1);
	return (++count);
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

int	ft_str_handler(char *str)
{
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
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
	count += ft_print_hex((unsigned long)ptr, 0);
	return (count);
}
