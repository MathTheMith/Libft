/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:19:11 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/07 13:42:04 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*p;
	const char	*d;

	i = 0;
	p = (char *)dest;
	d = (const char *)src;
	while (i < n)
	{
		p[i] = d[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char dest[20] = "123456789";
//     char src[20] = "Bonsoir";
//     ft_memcpy(dest, src, 3);
//     printf("%s\n", src);
//     printf("%s\n", dest);
// }