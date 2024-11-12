/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:50:15 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/07 10:28:54 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (n != i)
	{
		p[i] = '\0';
		i++;
	}
}
// int main()
// {
//     char str[20] = "Hello, world!";	
//     ft_bzero(str, 2);
//     printf("%s", str); 
// }
