#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
	
		i++;
	}
	return str;
}

int main(int ac, char **av)
{
	printf("%s", ft_strcapitalize(av[1]));
	return (0);
}
