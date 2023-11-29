#include <stdio.h>

int ft_str_is_printabl(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 32) && (str[i] <= 126))
        {
            i++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}


int main(void)
{
    int isprint;
    char    a[] = "\n";

    isprint = ft_str_is_printabl(a);
    printf("%d\n",isprint);
    return (0);
}