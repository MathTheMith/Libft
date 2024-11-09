#include "unistd.h"
#include <stdlib.h>
#include <stdio.h>

static int ft_strlen_w_set(char const *c , char const *set)
{
        size_t i;
        size_t j;

	j = 0;
	i = 0;
        while (c[i])
	{
		if (c[i] == *set)
		       j++;	
                i++;
	}
        return(i - j);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	ptr = malloc(ft_strlen_w_set(s1, set));
	while (s1[i])
	{
		if (s1[i] == *set)
			i++;
		else
		{
			ptr[j] = s1[i];
			j++;
			i++;	 
		}
	}
	return (ptr);
}

int main(void)
{
	printf("%s", ft_strtrim("okay je ne sais pas", "j"));
}

