#include "assert.h"
#include "str.h"
#include "test_str.h"


void my_strcpy_autotest(){
	char string2[] = "";
	const char * restrict str2 = string2;
	char string1[1];
	char * restrict str1 = string1;
	
        assert(str1 != NULL); //destination string isn't defined
	assert(str1[0] == '\0'); //the result of copying isn't empty while the source string was empty
	
}

void my_strcat_autotest(){
	char string2[] = "World";
	const char * restrict s2 = string2;
	char string1[50] = "hello";
	char * restrict s1 = string1;
	
	char *len = s1;
	int counter = 0;
	char *result_len = s1;
	int result_counter = 0;

	while (*len != '\0') {
		++len;
		++counter;
	}

	my_strcat(s1, s2);

	while (*result_len != '\0') {
                ++result_len;
                ++result_counter;
        }
	
	assert(result_len != len); //the length of the string wasn't changed after concatenation
}


void my_strlen_autotest() {
	const char s[] = "karasik";
	assert(my_strlen(s) == 7); 
}

void my_strcmp_autotest() {
	char *name = "abc";
	char *name2 = "ra";
	assert(my_strcmp(name, name2) < 0);
	char *zero = "";
	char *zero2 = "";
	assert(my_strcmp(zero, zero2) == 0);
}



