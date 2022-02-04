#include "dependencies.h"

int findNthTerm (int a, int r, int n){
	if (n == 1) return a;
	return r * findNthTerm (a, r, n - 1);
}

int main(){
	
	int a, r, n;
	
	printf ("Enter the initial value: ");
	scanf ("%i", &a);
	printf ("Enter the common ratio: ");
	scanf ("%i", &r);
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
	printf ("term of your arithmetic with initial value of %i and common ratio of %i is %i\n", a, r, findNthTerm(a, r, n));
	
}
