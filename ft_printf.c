#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_putchar(char c);
int ft_putstr(char *s);

int ft_printf(char const *b, ...)
{
    va_list args;
    va_start(args, b);
    int i = 0;
    int total = 0;

    while (b[i])
    {
        if (b[i] == '%')
        {
            i++;
            if (b[i] == 'c')
            {
                total += ft_putchar(va_arg(args, int));
            }
            if (b[i] == 's')
            {
                total += ft_putstr(va_arg(args, char *));
            }
        }
        else
        {
            ft_putchar(b[i]);
            total++;
        }
        i++;
    }
    va_end(args);
    return (total);
}

int main(void)
{
    int a = ft_printf("hol%c%s\n", 'a'," que tal"); // hol4
    printf("%d\n", a);
    printf("original: \n");
    int b = printf("hol%c%s\n", 'a'," que tal"); // hol4
    printf("%d\n", b);
    return (0);
}