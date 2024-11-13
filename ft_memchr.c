/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:29:40 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/13 10:25:59 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while ((unsigned char)c != p[i] && i < (n - 1))
		i++;
	if ((unsigned char)c == p[i])
		return ((void *)&p[i]);
	return (NULL);
}
// #include <stdio.h>

// int main() 
// {
// 	char *str;
// 	str = ft_memchr("bonjourno", 'n', 3);
//     if (!str)
//         printf("NULL");
//     else
//         printf("%s", str);
// }
