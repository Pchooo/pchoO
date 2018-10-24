#include <stdio.h>
#include "indexLastNegative.h"

int indexLastNegative (int array[], int n) {
	int i;
	for (i = n - 1; i >= 0; i--)
		if (array[i] < 0)
			return i;
}
