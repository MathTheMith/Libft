#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t i = 0;
	size_t taille;

	taille = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	if (len > taille)
		len = taille;
    ptr = malloc(len + 1);
    if (!ptr)
        return (NULL);
    while (i < len && s[start])
    {
        ptr[i] = s[start];
        i++;
        start++;
    }

    ptr[i] = '\0';

    return ptr;
}


// int main (void)
// {
// 	printf("%s", ft_substr("tripouille", 100, 1));
// }
