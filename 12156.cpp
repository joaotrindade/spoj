#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string input;
		cin >> input;
		for(int k = 0 ; k < input.size()/2; k+=2)
			cout << input[k];
		cout << endl;
	}
	return 0;
}