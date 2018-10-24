#include <stdio.h> 
#include "multiBetweenNegative.h"
#include "indexFirstNegative.h"
#include "indexLastNegative.h"

int multiBetweenNegative (int array[], int n) {
	int i;
	int multiBetweenNegative = 1;
	int indexFN = indexFirstNegative(array, n);
	int indexLN = indexLastNegative(array, n);
	for (i = indexFN; i < indexLN; i++) 
		multiBetweenNegative *= array[i];
	return multiBetweenNegative;
}
