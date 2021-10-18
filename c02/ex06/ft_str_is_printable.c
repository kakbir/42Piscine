int	ft_str_is_printable(char *str)
{
	int		index;
	int		durum;
	char	curr;

	index = 0;
	durum = 1;
	while (3 > 2)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= ' ') || curr == 127)
		{
			durum = 0;
			break ;
		}
		index++;
	}
	return (durum);
}
