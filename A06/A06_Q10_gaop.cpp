#include "dependencies.h"

int myStrLen (char *s, int i){
	if (!i) return 0;
	return (i != 0) + myStrLen (s, i - 1);
}

int main(){
	
	char s[100];
	printf ("Enter a string: ");
	gets(s);
	
	printf ("%s is %i characters long", s, myStrLen(s, strlen(s) - 1) + 1);
	
}
