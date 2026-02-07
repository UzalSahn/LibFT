/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:05:49 by kali              #+#    #+#             */
/*   Updated: 2026/02/07 15:13:02 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t index;
    
    if (dstsize == 0)
        return(ft_strlen(src));
    index = 0;
    while (src[index] != '\0' && index < dstsize - 1)
    {
        dst[index] = src[index];
        index++;
    }
    dst[index] = '\0';
    return(ft_strlen(src));
}