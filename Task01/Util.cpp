#include "Util.h"
string convert(int* array, int size) {
	string s = "";
	for (int i = 0; i < size; i++) {
		s = s + to_string(array[i]) + " ";
	}

	return s;
}

void init(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % (b - a + 1) + a;
	}
}