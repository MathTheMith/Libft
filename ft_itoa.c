/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:45:03 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/13 17:35:28 by math             ###   ########lyon.fr   */
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

char	*special_cases(int n)
{
	char	*ptr;

	if (n == INT_MIN)
	{
		ptr = malloc(12);
		if (!ptr)
			return (NULL);
		ft_strlcpy(ptr, "-2147483648", 12);
		return (ptr);
	}
	if (n == 0)
	{
		ptr = malloc(2);
		if (!ptr)
			return (NULL);
		ptr[0] = '0';
		ptr[1] = '\0';
		return (ptr);
	}
	return (NULL);
}

char	*allocate_memory(int n)
{
	size_t	len;
	char	*ptr;

	len = ft_intlen(n);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	return (ptr);
}

void	convert_number(char *ptr, int n, size_t len)
{
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
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	char	*ptr;

	result = special_cases(n);
	if (result)
		return (result);
	len = ft_intlen(n);
	ptr = allocate_memory(n);
	if (!ptr)
		return (NULL);
	convert_number(ptr, n, len);
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
