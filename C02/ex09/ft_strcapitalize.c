#include <stdio.h>
#include <stdbool.h>

char *ft_strcapitalize(char *str)
{
	int i = 0;
	bool isLowerCase;
	bool isNumber;
	bool isSpace = true;
	if (str[i] == '\0')
		return (0);
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		isLowerCase = (str[i] >= 'a' && str[i] <= 'z');
		isNumber = (str[i] >= '0' && str[i] <= '9');
		if (isSpace && isLowerCase && !isNumber)
		{
			str[i] -= 32;
			isSpace = false;
		}
		if (str[i] == ' ')
			isSpace = true;
		if (isNumber)
			isSpace = false;
		i++;
	}
	return str;
}

int main(int ac, char **av)
{
	printf("%s", ft_strcapitalize(av[1]));
	return (0);
}
