#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t i = 0;
    size_t str_len ;
    
    str_len = strlen(s);
    if (start >= str_len)
    {
        ptr = malloc(1); 
        if (!ptr)
            return (NULL);
        ptr[0] = '\0';
        return (ptr);
    }
    if (len > str_len - start)
        len = str_len - start;
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
    return (ptr);
}

// int main (void)
// {
// 	printf("%s", ft_substr("tripouille", 100, 1));
// }
