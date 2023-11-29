#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	dest_index;
	int	src_index;

	dest_index = 0;
	src_index = 0;
	while (dest[dest_index] != '\0')
		dest_index++;
	while (src[src_index] != '\0')
	{
		dest[dest_index + src_index] = src[src_index];
		src_index++;
	}
	dest[dest_index + src_index] = '\0';
	return (dest);
}



int main()
{
	char *result;

	char dest[50] = "somebody told me";
	char src[50] = " you had a boyfriend";

	result = ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
