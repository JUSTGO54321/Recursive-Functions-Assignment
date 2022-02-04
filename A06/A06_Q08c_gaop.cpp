#include <stdio.h>

int findNthTerm (int *A, int n){
	if (n <= 3) return A[n - 1];
	for (int i = 3; i < n; i++){
		A[i] = A[i - 1] + A [i - 2] + A[i - 3];
	}
	return A[n - 1];
}

int main(){
	
	int A[100] = {1, 2, -2};
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
