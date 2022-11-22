char *my_strcpy(char * restrict s1, const char * restrict s2) {
	char buf = '1';
	while (buf != '\0') {
		buf = *s2++;
		*s1++ = buf;
	}
	return s1;
}



