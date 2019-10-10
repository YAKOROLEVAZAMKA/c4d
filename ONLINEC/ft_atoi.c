#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char s[])
{
    int i, n, sign;
                            
    for (i = 0; isspace(s[i]); i++)
        ;
    sign = ( s[i] == '-' ) ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
} 
/*
int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 0;
	while (ft_isspace(*str))
		str++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (sign)
		return (-result);
	return (result);
}*/

int main(void)
{
    char s[500];
    scanf("%s", s);
    atoi(s);
    //ft_atoi(s);
    printf("\n%s", s);
    return (0);
}