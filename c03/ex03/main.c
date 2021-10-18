#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[20] = "a";
	char src[] = "defg";
	unsigned int nb = 2;


	ft_strncat(dest, src, nb);
	printf("%s", dest);

	return (0);
}
