/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshinaga <hshinaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:08:05 by hshinaga          #+#    #+#             */
/*   Updated: 2024/10/29 00:39:18 by hshinaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[h] && h < len)
	{
		n = 0;
		while (big[h + n] && little[n] && big[h + n] == little[n] && h
			+ n < len)
			n++;
		if (little[n] == '\0')
			return ((char *)&big[h]);
		h++;
	}
	return (NULL);
}
