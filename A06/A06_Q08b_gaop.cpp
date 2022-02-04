#include <stdio.h>

int findNthTerm (int *A, int n, int i){
	if (n <= 3) return A[n - 1];
	if (i <= n){
		A[i] = A[i - 1] + A[i - 2] + A[i - 3];
		return findNthTerm (A, n, i + 1);
	}	
	return A[n - 1];
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
	printf ("term is %i", findNthTerm(A, n, 3));
	
}
