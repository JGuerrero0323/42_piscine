#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
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
    int islower;
    char    a[] = "spy";

    islower = ft_str_is_lowercase(a);
    printf("%d\n",islower);
    return (0);
}