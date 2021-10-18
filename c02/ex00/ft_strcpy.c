char	*ft_strcpy(char *dest, char *src)
{
	int	sayi;

	sayi = 0;
	while (src[sayi] != '\0')
	{
		dest[sayi] = src[sayi];
		sayi ++;
	}
	dest[sayi] = '\0';
	return (dest);
}
