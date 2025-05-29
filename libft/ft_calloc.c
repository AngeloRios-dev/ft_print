/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angrios <angrios@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:17:15 by angrios           #+#    #+#             */
/*   Updated: 2025/05/11 13:48:53 by angrios          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	mem_size;
	void	*space;

	mem_size = nmemb * size;
	space = malloc(mem_size);
	if (!space)
		return (NULL);
	ft_bzero(space, mem_size);
	return (space);
}
