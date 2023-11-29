#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i=0;
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main (void)
{
    int is_num;
    char    n[]="0123456mfh789";

    is_num = ft_str_is_numeric(n);
    printf("%d\n",is_num);
    return (0);
}