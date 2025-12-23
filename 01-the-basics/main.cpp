#include <iostream>
using namespace std;

int main () {
	const int TOTAL = 5;
	int arr[TOTAL] = {1, 2, 3, 4, 5};

	for (int i = 0; i < 100; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
