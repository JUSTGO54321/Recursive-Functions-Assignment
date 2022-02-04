#include "dependencies.h"

int myStrLen (char *s, int i){
	if (!s[i]) return 0;
	return (s[i] != 0) + myStrLen (s, i + 1);
}

int main(){
	
	char s[100];
	printf ("Enter a string: ");
	gets(s);
	printf ("%s is %i characters long", s, myStrLen(s, 0));
	
}
