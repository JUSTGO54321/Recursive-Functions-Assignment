#include "dependencies.h"
int myStrLen (char *s){
	if (!*s) return 0;
	return (*s != 0) + myStrLen (s + 1);
}

int main(){
	
	char s[100];
	printf ("Enter a string: ");
	gets(s);
	printf ("%s is %i characters long", s, myStrLen(s));
	
}
