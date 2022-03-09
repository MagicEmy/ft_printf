
void	ft_putnbr_base(long long nbr, int base)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr <= -base)
			ft_putnbr_base(nbr / -base, base);
		ft_putchar(ft_itoc(-(nbr % base)));
	}
	else if (nbr >= base)
	{
		ft_putnbr_base(nbr / base, base);
		ft_putchar(ft_itoc(nbr % base));
	}
	else
		ft_putchar(ft_itoc(nbr % base));
}

int	ft_itoc(int i)
{
	if (i >= 0 && i <= 9)
		return (i + '0');
	if (i >= 10 && i <= 36)
		return (i + 'a' - 10);
	return (i);
}
