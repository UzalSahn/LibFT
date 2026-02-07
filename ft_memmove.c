/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:46:49 by kali              #+#    #+#             */
/*   Updated: 2026/02/07 15:04:22 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	const unsigned char *source;
	size_t index;

	dest = dst;
	source = src;
	if (dest > source)
	{
		index = len - 1;
		while (index > 0)
		{
			index --;
			dest[index] = source[index];
		}
	}
	else
	{
		index = 0;
		 while (index < len)
		{   
			dest[index] = source[index];
			index++;
		}
	}
	return(dest);	
}