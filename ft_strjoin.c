#include "unistd.h"
#include <stdlib.h>
#include <stdio.h>
int ft_strlen(char *c)
{
	size_t i;
	i = 0;
	while (c[i])
		i++;
	return(i);
}
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ptr = malloc(len);
	while (ft_strlen((char *)s1) > i)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (ft_strlen((char *)s2) > j)
	{
		ptr[i + j] = s2[j];
		j++;
	}
	return (ptr);
}
// int main(void)
// {
// 	printf("%s", ft_strjoin("Bonjour", " a tous"));
// }

	
