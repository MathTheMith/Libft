#include "libft.h"

static size_t ft_strlen_w_set(char const *c, char const *set)
{
    size_t i = 0;
    size_t j = 0;

    while (c[i] && ft_strchr(set, c[i]))
        i++;
    j = i;
    while (c[j])
        j++;
    while (j > i && ft_strchr(set, c[j - 1]))
        j--;
    return (j - i);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	size_t i;
	size_t len;
	size_t j;


	j = 0;
	i = 0;
	len = ft_strlen_w_set(s1, set);
	ptr = malloc(j + 1);
	while(ft_strchr(set, s1[i]))
		i++;
	while(s1[i] && len-- > 0)
	{
		ptr[j] = s1[i];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main(void)
// {
// 	printf("%s", ft_strtrim("aaaaabfaaaaaabaaa", "a"));
// }

