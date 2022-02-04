#include <stdio.h>

int findNthTerm (int *A, int n){
	if (n <= 3) return A[n - 1];
	return findNthTerm (A, n - 3) + findNthTerm (A, n - 2) + findNthTerm (A, n - 1);
}

int main(){
	
	int A[20] = {1, 2, -2};
	int n;
	
	printf ("Enter n: ");
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
	printf ("term is %i", findNthTerm(A, n));
	
}
