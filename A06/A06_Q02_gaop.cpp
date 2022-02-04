#include <stdio.h>

int findSumBetween (int min, int max){
	if (min > max) return 0;
	return min + findSumBetween(min + 1, max);
}

int main(){
	
	int min, max;
	
	printf ("Enter the mimnimum: ");
	scanf ("%i", &min);
	printf ("Enter the maximum: ");
	scanf ("%i", &max);
	
	printf ("The sum of all numbers between %i and %i inclusive is %i", min, max, findSumBetween(min, max));
	
}
