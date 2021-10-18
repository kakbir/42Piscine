#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

int main(void)
{
    int n ;
    n =6;
    char *a;
    char b[n];
    char *durum;
    
    durum = ft_strncpy(b,a,n);
    
    a="merhaba";
    
    printf("%s", durum);
    
    
}
