#include "Util.h"
#include "sort.h"

#define SIZE 10

int main() {
	srand(time(NULL));
	int array[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int array[SIZE]/*{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}*/;

	/*init(array, SIZE, -20, 20);*/

	cout << "Before Array: " << convert(array, SIZE) << endl;

	buble_sort(array, SIZE);

	cout << "After Array: " << convert(array, SIZE) << endl;

	return 0;
}