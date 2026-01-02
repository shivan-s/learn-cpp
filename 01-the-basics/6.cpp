// Invariants are a property constraint that we consider to always be true.
// One example could be accessing a vector, where we always assume the first element is present


#include <iostream>

using namespace std;

int main () {

	vector<int> v {1};

	cout << v[0] << "\n";

	return 0;
}
