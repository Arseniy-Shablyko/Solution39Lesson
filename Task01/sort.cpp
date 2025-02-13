#include "sort.h"

// O(N^2)
void buble_sort(int* array, int size) {
	for (int g = 0; g < size - 1; g++) {
		bool flag = true;

		for (int i = 1; i < (size - 1 - g); i++) {

			if (array[i] > array[i + 1]) {
				int temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
				flag = false;
			}
		}

		if (flag) {
			break;
		}
	}
}

void selected_sort(int* array, int size) {
	for (int j = 0; j < size - 1; j++) {
		int index = j;

		for (int i = j + 1; i < size; i++) {
			if (array[index] < array[i]) {
				index = i;
			}
		}

		int t = array[j];
		array[j] = array[index];
		array[index] = t;

	}
}