#include <stdio.h>
#include "multiBeforeAndAfterNegative.h"
#include "indexFirstNegative.h"
#include "indexLastNegative.h"

int multiBeforeAndAfterNegative (int array[], int n) {
	int multiBeforeAndAfterNegative = 1;
	int indexFN = indexFirstNegative(array, n);
	int indexLN = indexLastNegative (array, n);
	int i;
	for (i = 0; i < indexFN; i++)
		multiBeforeAndAfterNegative *= array[i];
	for (i = indexLN; i < n; i++)
		multiBeforeAndAfterNegative *= array[i];
	return multiBeforeAndAfterNegative;
}
