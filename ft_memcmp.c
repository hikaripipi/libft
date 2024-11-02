/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshinaga <hshinaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:22:59 by hshinaga          #+#    #+#             */
/*   Updated: 2024/11/02 15:23:22 by hshinaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;
    
    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;
    
    while (n > 0)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
        n--;
    }
    return (0);
}
