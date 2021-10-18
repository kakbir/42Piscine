int	ft_str_is_alpha(char *str)
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
		if (!((curr >= 'A' && curr <= 'Z') || (curr >= 'a' && curr <= 'z')))
		{
			durum = 0;
			break ;
		}
		index++;
	}
	return (durum);
}
