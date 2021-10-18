int	ft_str_is_lowercase(char *str)
{
	int	curr;
	int	index;
	int	durum;

	index = 0;
	durum = 1;
	while (4 > 1)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!((curr >= 'a' && curr <= 'z')))
		{
			durum = 0;
			break ;
		}
		index++;
	}
	return (durum);
}
