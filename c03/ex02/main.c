#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dest[20] = "kamil";
	char src[] = "merhaba!";

	ft_strcat(dest, src);
	printf("%s", dest);

	return (0);
}
