/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:40:19 by math              #+#    #+#             */
/*   Updated: 2024/11/13 17:20:47 by math             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_empty_string(void)
{
	char	*ptr;

	ptr = malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_alloc_substr(size_t len)
{
	char	*ptr;

	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	str_len;

	i = 0;
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_empty_string());
	if (len > str_len - start)
		len = str_len - start;
	ptr = ft_alloc_substr(len);
	if (!ptr)
		return (NULL);
	while (i < len && s[start])
		ptr[i++] = s[start++];
	return (ptr);
}

// int main (void)
// {
// 	printf("%s", ft_substr("tripouille", 100, 1));
// }
