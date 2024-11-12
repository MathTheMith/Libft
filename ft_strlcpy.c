/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:02:28 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/12 18:35:15 by math             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (res);
}

// int main(void)
// {
// 	char dst[] = "Bonjour";
// 	char src[] = "Bonsoir";
// 	unsigned int size;
// 	size = 4;
//  	printf("%d", ft_strlcpy(dst, src, size));
// }