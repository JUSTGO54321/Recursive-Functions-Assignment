#include <stdio.h>

int findSumBetween (int min, int max){
	return (max * (max + 1)) / 2 - (min * (min - 1)) / 2;
}

int main(){
	
	int min, max;
	printf ("Enter the minimum: ");
	scanf ("%i", &min);
	printf ("enter the maximum: ");
	scanf ("%i", &max);
	
	printf ("The sum of all the numbers between %i and %i inclusive is %i", min, max, findSumBetween(min, max));
	
}
