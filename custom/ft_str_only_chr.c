#include "../libft.h"

char	*ft_str_only_chr(char *str, int searchedChar)
{
	while (*str == searchedChar && *str != 0)
		str++;
	if (*str != searchedChar && *str != 0)
		return (str);
	else
		return (NULL);
}