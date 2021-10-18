#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *str1;
	char *str2;
	int a;
	str1 = "134";
	str2 = "123";
	a = ft_strcmp(str1,str2);
	printf("%d", a);
}
