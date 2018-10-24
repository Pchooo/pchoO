#include <stdio.h>
#include "indexFirstNegative.h"

int indexFirstNegative (int array[], int n) {	
	int i;
	for (i = 0; i < n; i++)
		if (array[i] < 0)
			return i;
}
