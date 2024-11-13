/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:34:09 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/13 10:16:23 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	j = 0;
	i = ft_strlen(dst);
	if (size <= ft_strlen(dst))
		k = size + ft_strlen(src);
	else
		k = ft_strlen(dst) + ft_strlen(src);
	while (src[j] && size > i + 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (k);
}

// int main(void)
// {
// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
//     char str1[12] = "";
//     char str2[20] = "";
//     printf("%zu\n", ft_strlcat(str1, src, 3));
//     char str3[12] = "";
//     char str4[20] = "";
//     printf("%zu\n", strlcat(str1, src, 3));
// }
