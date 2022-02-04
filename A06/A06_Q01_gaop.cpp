#include "dependencies.h"

int findNumOccurence (char *s, char c){
	
	if (!*s) return 0;
	return (*s == c) + findNumOccurence(s + 1, c);
	
}

int main(){
	
	char s[100];
	char c;
	int occurence;
	
	printf ("Enter a string: ");
	fflush(stdin);
	gets(s);
	
	printf ("Enter a character: ");
	fflush(stdin);
	c = getchar();

	printf ("The number of times '%c\' occures in \"%s\" is %i times\n", c, s, findNumOccurence (s, c));
	
}
