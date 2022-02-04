#include <stdio.h>

int findSumBetween (int min, int max, int *A){
	if (min > max) return 0;
	return A[min] + findSumBetween(min + 1, max, A);
}

int main(){
	
	int minIndex, maxIndex, numIndex;
	int A[100];
	
	printf ("Enter the number of integers in your array: ");
	scanf ("%i", &numIndex);
	
	for (int i = 0; i < numIndex; i++){
		printf ("Enter integer #%i: ", i + 1);
		scanf ("%i", &A[i]);
	}
	
	printf ("Enter minIndex: ");
	scanf ("%i", &minIndex);
	
	printf ("Enter maxIndex: ");
	scanf ("%i", &maxIndex);
	
	printf ("The sum of all integers from index %i to index %i is %i", minIndex, maxIndex, findSumBetween(minIndex, maxIndex, A));
	
}
