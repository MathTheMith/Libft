/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:38:50 by math              #+#    #+#             */
/*   Updated: 2024/11/16 13:43:15 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_w_set(char const *c, char const *set)
{
	size_t	start;
	size_t	end;

	end = ft_strlen(c);
	start = 0;
	while (c[start] && ft_strchr(set, c[start]))
		start++;
	while (end > start && ft_strchr(set, c[end - 1]))
		end--;
	return (end - start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	len;
	size_t	j;

	j = 0;
	i = 0;
	len = ft_strlen_w_set(s1, set);
	if (len == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (ft_strchr(set, s1[i]))
		i++;
	while (j < len)
		ptr[j++] = s1[i++];
	ptr[j] = '\0';
	return (ptr);
}

// int main(void)
// {
//     printf("%s", ft_strtrim("bonjour a tout le monde", "bjourne"));
//     return 0;
// }