#include <stdio.h>
#include <string.h>

int isPalindrome (char *s, int lo, int hi){
	if (lo >= hi) return 1;
	if (s[lo] == s[hi]) return isPalindrome (s, lo + 1, hi - 1);
	else return 0;
}

int main(){
	
	char s[100];
	
	printf ("Enter a string: ");
	gets(s);
	
	if (isPalindrome(s, 0, strlen(s) - 1)) printf ("%s is a palindrome\n", s);
	else printf ("%s is not a palindrome\n", s);
	
}
