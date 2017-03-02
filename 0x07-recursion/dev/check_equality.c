char *parse(char *s, char c)
{
	if (*s != c)
		return (s);
	return (parse_star(++s));
}

int parse(char *s1, char *s2)
{
	int star = 0;
	char post_l;
	char *len1, *post_i1, *post_i2;

	len1 = address_of_end(s1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	
		while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
				s1++, s2++;
			if (*s2 == '*')
			{
				s2 = parse_star(s2);
				if (*s2 == '\0')
					return (1);
				post_l = *s2;
				post_i1 = s1;
				post_i2 = s2;
				while (*s1 != *s2 && *s1 != '\0')
					s1++;
				if (*s1 == '\0')
					return (0);
				star = 1;
			}
			if (*s1 != *s2)
			{
				if (star == 0)
					return (0);
				found_star = 0;
				len1 = regress(len1, post_l);
				if (post_i1 == len1)
					return (0);
				s1 = len1;
				s2 = post_i2;
			}
	}
}
