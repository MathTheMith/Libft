/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:35:21 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/16 13:02:44 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*d;

	d = (unsigned char *)s2;
	p = (unsigned char *)s1;
	i = 0;
	if (!p && !d)
		return (0);
	while (i < n)
	{
		if (p[i] != d[i])
			return (p[i] - d[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	char s3[] = {0, 0, 42, 0};
//   	printf("%d",ft_memcmp(s2, s, 1));
// }
