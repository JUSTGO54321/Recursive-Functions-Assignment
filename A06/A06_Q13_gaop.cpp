#include <stdio.h>

int stringValue (char *s){
	if (!*s) return 0;
	if (*s >= 'a' && *s <= 'z') return 10 + stringValue(s + 1);
	if (*s >= 'A' && *s <= 'Z') return 20 + stringValue(s + 1);
	if (*s >= '0' && *s <= '9') return 50 + stringValue(s + 1);
	if (*s == '*') return 100 + stringValue(s + 1);
	return stringValue(s + 1);
}

int main(){
	
	char s[100];
	
	printf ("Enter a string: ");
	gets(s);
	printf ("Your string is worth %i points\n", stringValue(s));
	
}
