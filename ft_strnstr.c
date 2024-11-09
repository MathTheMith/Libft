/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:51:19 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/09 15:19:37 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t n = 0;

    if (little[n] == '\0') {
        return (char *)big;
    }
    while (big[i] && len > 0)
    {
        n = 0;
        while (little[n] == big[i + n] && (i + n) < len)
        {
            if (little[n + 1] == '\0')
                return (char *)&big[i];
            n++;
        }
        i++;
    }
    return NULL;
}

// int main(void)
// {
// 	char haystack[30] = "aaabcabcd";
//     char str[20] = "Bonjourbonjour";
//     char isfind[20] = "b";
//     printf("%s\n", ft_strnstr(haystack, "aaabc", 5));
//     return 0;
// }
