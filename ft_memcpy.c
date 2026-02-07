/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:46:40 by kali              #+#    #+#             */
/*   Updated: 2026/02/07 14:46:44 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char *source;
	unsigned char *dest;
	size_t index;
	
	source = src;
	dest = dst;
	index = 0;
	while (index < n)
	{
		dest[index] = source[index];
		index++;
	}
	return(dest);
}
