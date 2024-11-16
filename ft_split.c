/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:31:07 by math              #+#    #+#             */
/*   Updated: 2024/11/16 14:46:49 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**allocate_and_fill(char const *s, char c, char **ptr)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c))
				len = ft_strchr(s, c) - s;
			else
				len = ft_strlen(s);
			ptr[i] = ft_substr(s, 0, len);
			if (!ptr[i])
				return (NULL);
			i++;
			s += len;
		}
	}
	ptr[i] = (NULL);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	if (!allocate_and_fill(s, c, ptr))
	{
		free_split(ptr);
		return (NULL);
	}
	return (ptr);
}

// int main()
// {
//     char *str = "  tripouille  42  ";
//     char **result = ft_split(str, '4');

//     int i = 0;
//     while (result[i] != NULL)
//     {
//         printf("%s\n", result[i]);
//         free(result[i]);
//         i++;
//     }

//     free(result);
//     return 0;
// }
