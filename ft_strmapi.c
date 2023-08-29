#include "libft.h"

/*static char	ft_random(unsigned int num, char c)
{
	unsigned char	result;
	
	result = c + num;
	if (result < 32)
		result = result + 32;
	else if (result > 126)
		result = (result - 127) + 32;
	return (result);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc((sizeof(char)) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int main ()
{
	//char	result;
	char	*prova;
	
	//result = ft_random(61, '\n');
	//printf("funcio random: %c\n", result);
	prova = ft_strmapi("hola", ft_random);
	printf("%s", prova);
	return (0);
}*/
