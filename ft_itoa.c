/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:45:03 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/13 15:09:28 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
	{
		count++;
		if (n == 0)
			return (count);
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;

	if (n == INT_MIN)
	{
		ptr = malloc(12);
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, "-2147483648", 12);
		return (ptr);
	}
	len = ft_intlen(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (n < 0)
	{
		n = -n;
		ptr[0] = '-';
	}
	while (n > 0)
	{
		len--;
		ptr[len] = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}

// int main(void)
// {
// 	printf("%s", ft_itoa(INT_MIN));
// }

// int main(void)
// {
// 	printf("%s", ft_itoa(INT_MIN));
// }
