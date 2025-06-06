/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 10:48:44 by angrios           #+#    #+#             */
/*   Updated: 2025/06/06 18:17:13 by angrios          ###   ########.fr       */
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
