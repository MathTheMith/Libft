#include "libft.h"

static int find_occurence(char const *s, char c)
{
    size_t i = 0;
    while (*s)
    {
        if (*s == c)
            i++;
        s++;
    }
    return i;
}

char **ft_split(char const *s, char c)
{
    size_t i = 0;
    size_t j = 0;
    size_t len_word = 0;
    char **ptr;

    int k = find_occurence(s, c) + 1;
    ptr = malloc((k + 1) * sizeof(char *));
    if (!ptr)
	{
		free(ptr);
        return (NULL);
	}
    while (s[i])
    {
        while (s[i] && s[i] != c)
        {
            len_word++;
            i++;
        }
        if (len_word > 0)
        {
            ptr[j] = malloc(len_word + 1);
            if (!ptr[j]) {
                j = 0;
                while (ptr[j])
                {
                    free(ptr[j]);
                    j++;
                }
                free(ptr);
                return (NULL);
            }
			ptr[j][len_word] = '\0';
            ft_strlcpy(ptr[j], &s[i - len_word], len_word + 1);
            j++;
        }
        if (s[i]) 
			i++; 
        len_word = 0;
    }
    ptr[j] = NULL;
    return (ptr);
}

int main()
{
    char *str = "  tripouille  42  ";
    char **result = ft_split(str, '4');

    int i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }

    free(result);
    return 0;
}
