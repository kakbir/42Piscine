#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);


int	main(void)
{
	char *str1;
	char *str2;

	str1 = "Hel";
	str2 = "Hek";

	printf("ft : %d\n", ft_strncmp(str1, str2, 4));
}
