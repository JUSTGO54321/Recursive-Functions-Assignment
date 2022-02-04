#include "dependencies.h"

int countMults (int *A, int lo, int hi, int mult){
	if (lo > hi) return 0;
	if (A[lo] % mult == 0) return 1 + countMults(A, lo + 1, hi, mult);
	return countMults(A, lo + 1, hi, mult);
	
}

int main(){
	
	int numElements, lo, hi, mult;
	int A[100] = {0, 5, 123, 42, 75, 7, 234, 2, 7};
	
	printf ("Enter the number of elements: ");
	scanf ("%i", &numElements);
	
	for (int i = 0; i < numElements; i++){
		printf ("Enter number #%i: ", i + 1);
		scanf ("%i", &A[i]);
	}
	
	printf ("Enter mult: ");
	scanf ("%i", &mult);
	printf ("Enter the lowest index: ");
	scanf ("%i", &lo);
	printf ("Enter the highest index: ");
	scanf ("%i", &hi);
	printf ("There are %i multiples of %i inside array A from index %i to %i", countMults(A, lo, hi, mult), mult, lo, hi);
	
}
