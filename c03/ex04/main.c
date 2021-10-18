#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "12343567889";
	char to_find[] = "4356";

	printf("%s\n", ft_strstr(str, to_find));

	return (0);
}
