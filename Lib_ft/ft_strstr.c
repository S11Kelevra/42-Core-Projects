#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int limit;
	int littlen;
	char *loc;

	loc = (char *)big;
	i = 0;
	limit = ft_strlen(big);
	littlen = ft_strlen(little);

	if (!little)
		return(&loc[i]);
	while (i <= limit)
	{
		if (ft_strncmp(&big[i], little, littlen) == 0)
			return (&loc[i]);
		i++;
	}
	return(NULL);
}
