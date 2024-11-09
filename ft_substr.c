#include "unistd.h"
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t i; 
	i = 0;
	if (len > 0)
		ptr = malloc(len);
	else 
		return(NULL);
	if (!ptr)
		return(NULL);
	while (len > i)
	{
		ptr[i] = s[start - 1];
		i++;
		start++;
	}
	return ((char *)ptr);
}

// int main (void)
// {
// 	printf("%s", ft_substr("Bonjo", 3, 10));
// }
