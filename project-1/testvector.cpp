#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <char> vowels {'a','e','i','o','u'};
	cout << vowels.at(0) << endl;
	cout << vowels[0] << endl;
	return 0;
}
