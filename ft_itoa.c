#include "libft.h"
static int ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

static size_t ft_intlen(int n)
{
	size_t count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}
char *ft_itoa(int n)
{
	char *ptr;
	size_t c;
	size_t i;

	i = 0;
	c = ft_intlen(n);
	ptr = malloc(c + 1);
	if (n < 0)
	{
		ptr[i] == '-';
		i++;
	}
	while (c > 0)
	{
		ptr[i] = (n / ft_iterative_power(10, c)) + 48;
		c--;
	}
	return (ptr);
}

int main(void)
{
	printf("%s", ft_itoa(-453));
}
