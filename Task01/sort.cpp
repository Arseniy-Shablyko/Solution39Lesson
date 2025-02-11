#include "sort.h"
void buble_sort(int* array, int size) {
	for (int g = 0; g < size - 1; g++) {
		for (int i = 1; i < size - 1; i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	
}