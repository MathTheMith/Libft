/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:42:02 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/09 14:31:50 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *p;
    const char *d;
    
    if (src > dest)
        return(ft_memcpy(dest, src, n));
    p = (char*)dest;
    d = (const char*)src;
    while (n > 0)
    {
        n--;
        p[n] = d[n];
    }
    return(dest);
}
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *p;
    const char *d;
    
    i = 0;
    p = (char*)dest;
    d = (const char*)src;
    while (i < n)
    {
        p[i] = d[i];
        i++;
    }
    return(dest);
}
// int main(void)
// {
//     char str1[20] = "123456789";
//     char str2[8] = "Bonjour";
//     ft_memmove(str1, str2, 8);
//     printf("%s\n", str1);
// }