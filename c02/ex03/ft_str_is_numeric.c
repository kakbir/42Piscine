int	ft_str_is_numeric(char *str)
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
		if (!((curr >= '0' && curr <= '9')))
		{
			durum = 0;
			break ;
		}
		index++;
	}
	return (durum);
}
