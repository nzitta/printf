#include <stdio.h>
#include <stdarg.h>

int sumatorio (int n, ...)
{
    va_list vargs;
    int ac = 0;
    va_start(vargs, n);
    
    for (int i = 0; i < n; i++)
    {
        int sig = va_arg(vargs, int);
        ac += sig;
    }
    va_end(vargs);
    return (ac);
}

int main(void)
{
    int a = sumatorio(3, 1, 2, 3);
    printf("la suma es: %d", a);
    return (0);
}
