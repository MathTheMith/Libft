#include "libft.h"

#include <stdlib.h>
#include <string.h>

static size_t ft_strlen_w_set(char const *c, char const *set)
{
    size_t start = 0;
    size_t end = strlen(c);

    while (c[start] && strchr(set, c[start]))
        start++;
    while (end > start && strchr(set, c[end - 1]))
        end--;
    return end - start;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr;
    size_t i = 0;
    size_t len;
    size_t j = 0;

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
    while (strchr(set, s1[i]))
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
