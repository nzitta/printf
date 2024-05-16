
void ft_putchar(char c);
void	ft_putnbr(int n)
{
	long long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putchar((num % 10) + '0');
	}
	else
		ft_putchar(num + '0');
}