/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 13:53:32 by kali              #+#    #+#             */
/*   Updated: 2026/02/07 14:35:46 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t index;
	unsigned char *ptr;

	ptr = s;
	index = 0;
	while(index < n)
	{
		ptr[index] = 0;
		index++;
	}
}
/*void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}
*/ // implementation of the previeus function memset.c