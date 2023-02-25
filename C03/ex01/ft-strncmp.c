#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
       while(s1[i] && s2[i] &&
	s1[i] == s2[i] && i < n)
      		i++;
	return (s1[i]-s2[i]);       
}

int main(int ac, char **av)
{
	if(ac ==3)
		printf("%i", ft_strncmp(av[1], av[2], 2));
	return (0);
}
