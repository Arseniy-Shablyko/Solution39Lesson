#include "Util.h"
#include "sort.h"

#define SIZE 20

// Это мощный комментарий :))
int main() {
	srand(time(NULL));
	int array[SIZE];

	init(array, SIZE, -20, 20);

	cout << "Before Array: " << convert(array, SIZE) << endl;

	buble_sort(array, SIZE);
	cout << "After Array: " << convert(array, SIZE) << endl;

	
	return 0;
}