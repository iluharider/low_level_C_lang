#include "str.h"



char *my_strcat(char * restrict s1, const char * restrict s2 ) {

	char *i = s1;
	while (*i != '\0') {
		++i;
	}
	my_strcpy(i, s2);
	return s1;
}


char *my_strcpy(char * restrict s1, const char * restrict s2) {

	char *ptr = s1;
        char buf = '1';
        while (buf != '\0') {
                buf = *s2++;
                *s1++ = buf;
        }
	*s1 = '\0';
	return ptr; 
}

size_t my_strlen(const char *s) {
	size_t counter = 0;
	while (*s != '\0') {
		++s;
		++counter;
	}
	return counter;
}

int my_strcmp(const char *s1, const char *s2){
	while (*s1) {
		if (*s1 != *s2) {
			break;
		}
		++s1;
		++s2;
	}
	return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}


