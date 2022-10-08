

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
	char *p;

	i = start;
	p = malloc(sizeof(char) * len+1);
	while(i <= len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return p;
}