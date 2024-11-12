/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math <math@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:31:07 by math              #+#    #+#             */
/*   Updated: 2024/11/12 18:32:03 by math             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_occurence(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	**allocate_memory(int count)
{
	char	**ptr;

	ptr = malloc((count + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	return (ptr);
}

static void	free_memory(char **ptr, int j)
{
	while (j >= 0)
	{
		free(ptr[j]);
		j--;
	}
	free(ptr);
}

static char	*copy_word(char const *s, int len_word)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(len_word + 1);
	if (!word)
		return (NULL);
	while (i < len_word)
	{
		word[i] = s[i];
		i++;
	}
	word[len_word] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**ptr;
	int		i;
	int		j;
	int		len_word;

	i = 0;
	j = 0;
	ptr = allocate_memory(word_count);
	word_count = find_occurence(s, c);
	if (!ptr)
		return (NULL);
	while (s[i] && j < word_count)
	{
		while (s[i] && s[i] == c)
			i++;
		len_word = 0;
		while (s[i + len_word] && s[i + len_word] != c)
			len_word++;
		if (len_word > 0)
		{
			ptr[j] = copy_word(&s[i], len_word);
			if (!ptr[j])
			{
				free_memory(ptr, j - 1);
				return (NULL);
			}
			j++;
		}
		i += len_word;
	}
	ptr[j] = (NULL);
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
