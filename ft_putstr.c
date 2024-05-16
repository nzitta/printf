#include <unistd.h>

int ft_putstr(char *s)
{
    int i;

    i = 0;
	if (!s)
		return ft_putstr("(null)");
	while (s[i])
    {
		write (1, &s[i++], 1);
    }
    return (i);
}