/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:19:50 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/07 09:35:28 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t i;
    char *ptr;
    i = 0;
    while (s[i])
        i++;
    ptr = malloc(i + 1);
    if (ptr == NULL)
        return (0);
    i = 0;
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
    free(ptr);
}

// int main(void)
// {
//     char str[20] = "";
//     printf("%s", ft_strdup(str));
// }