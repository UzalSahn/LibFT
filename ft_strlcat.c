/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:13:59 by kali              #+#    #+#             */
/*   Updated: 2026/02/07 15:21:53 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t index;
	size_t dst_len = ft_strlen(dst);
	size_t src_len = ft_strlen(src);

	index = 0;
	if (dstsize <= dst_len)
		return(dst_len + src_len);
	
	while (src[index] != '\0' && index < dstsize - dst_len - 1)
	{
		dst[dst_len + index] = src[index];
		index ++;
	}
	dst[dst_len + index] = '\0';
	return(dst_len + src_len);
}