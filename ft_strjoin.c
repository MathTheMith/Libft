#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len;
	size_t i;
	size_t j;
	char *ptr;

	i = 0;
	j = 0;
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	ptr = malloc(len + 1);
	if (!ptr)
		return(NULL);
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
	ptr[i + j] = '\0';
	return (ptr);
}
// int main(void)
// {
// 	printf("%s", ft_strjoin("Tripouille", "1"));
// }

	
