#include <stdio.h>

int findNthTerm (int a, int d, int n){
	if (n == 1) return a;
	return d + findNthTerm (a, d, n - 1);
}

int main(){
	
	int a, d, n;
	
	printf ("Enter the initial value: ");
	scanf ("%i", &a);
	printf ("Enter the difference: ");
	scanf ("%i", &d);
	printf ("Enter the nth term: ");
	scanf ("%i", &n);
	
	printf ("The %i", n);
	if (n == 1){
		printf ("st ");
	}
	else if (n == 2){
		printf ("nd ");
	}
	else{
		printf ("th ");
	}
	printf ("term of your arithmetic with initial value of %i and difference of %i is %i\n", a, d, findNthTerm(a, d, n));
	
}
