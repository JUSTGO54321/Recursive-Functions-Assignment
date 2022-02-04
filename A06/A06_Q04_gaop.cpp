#include "dependencies.h"

void printReversedString (char *s){
	
	if (*s){
		printReversedString (s + 1);
		printf ("%c", *s);
	}

}

int main(){
	
	char s[100];
	
	printf ("Enter a string: ");
	gets(s);
	
	printf("%s backwards is ", s);
	printReversedString(s);
	
}
