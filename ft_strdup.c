/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshinaga <hshinaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:32:09 by hshinaga          #+#    #+#             */
/*   Updated: 2024/11/02 15:35:30 by hshinaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*test = "Hello, World!";
	char		*dup;
	const char	*empty = "";
	char		*empty_dup;

	dup = ft_strdup(test);
	printf("Original: %s\n", test);
	printf("Duplicate: %s\n", dup);
	free(dup);
	empty_dup = ft_strdup(empty);
	printf("Empty Original: '%s'\n", empty);
	printf("Empty Duplicate: '%s'\n", empty_dup);
	free(empty_dup);
	return (0);
}
