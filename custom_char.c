#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void ft_putchar(char c);

int custom_char(char *b, ...)
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
                ft_putchar(va_arg(args, int));
            }
        }
        else
            ft_putchar(b[i]);
        i++;
        total++;
    }
    va_end(args);
    return (total);
}

int main(void)
{
    int a = custom_char("hol%c%c\n", 'm','a'); // hol4
    printf("%d\n", a);
    return (0);
}