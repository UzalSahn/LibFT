/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:34:53 by kali              #+#    #+#             */
/*   Updated: 2026/02/07 13:47:37 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr;
	size_t index;
	
	ptr = b;
	index = 0;
	while (index < len)
	{       
		ptr[index] = (unsigned char)c;
		index++;
	}
	return(b);
}