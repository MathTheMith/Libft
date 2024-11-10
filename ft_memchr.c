/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:29:40 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/10 13:08:46 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *p;
    size_t i;
    i = 0;
	
    p = (unsigned char *)s;
	if (n == 0)
		return(NULL);
    while ((unsigned char)c != p[i] && i < n)
        i++;
    if ((unsigned char)c == p[i])
        return((void *)&p[i]);
    return(NULL);
}
// #include <stdio.h>

// int main() {
//     const char str[20] = "Hecho, World!";
//     char c = 'r';
//     printf("%c", ft_memchr(str, c, 8));

// }
