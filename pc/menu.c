#include <stdio.h> 
#include "indexFirstNegative.h"
#include "indexLastNegative.h"
#include "multiBetweenNegative.h"
#include "multiBeforeAndAfterNegative.h"
#define N 20

int main()
{
	int command;
	int array[N];
	int negative = 0;
	int n;
	int s;
	int i;
	int result;
	scanf("%d ", &command);
	while(1){
		s = scanf("%d", &array[n]);
		if(s == -1)
			break;
		n++;
	}
	for (i =0; i < n; i++)
		if (array[i] < 0)
			negative++;
	if (negative == 0) {
		printf("Данные некорректны\n");
		return 0;
	}
	else {
		switch (command) {
			case 0:
				result = indexFirstNegative(array, n);
				break;
			case 1:
				result = indexLastNegative(array, n);
				break;
			case 2:
				result = multiBetweenNegative(array, n);
				break;
			case 3:
				result = multiBeforeAndAfterNegative(array, n);
				break;
			default:
				printf("Данные некорректны\n");
				return 0;
		}
	printf("%d\n", result);
	}
}
