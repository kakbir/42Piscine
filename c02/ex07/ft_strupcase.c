char	*ft_strupcase(char *str)
{
	int		index;
	char	curr;

	index = 0;
	while (4 > 1)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (curr >= 'a' && curr <= 'z')
		{
			str[index] = curr - 32;
		}
		index++;
	}
	return (str);
}
