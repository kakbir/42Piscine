int	ft_str_is_uppercase(char *str)
{
	int	curr;
	int	index;
	int	durum;

	index = 0;
	durum = 1;
	while (2 > 1)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!((curr >= 'A' && curr <= 'Z')))
		{
			durum = 0;
			break ;
		}
		index++;
	}
	return (durum);
}
