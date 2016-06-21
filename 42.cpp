#include <iostream>
#include <vector>
using namespace std;

int reverse_number(int n) {
	int number = n, multiplier = 1, result = 0;
	vector<int> digits;
	
	while (number >= 10) {
		digits.push_back(number%10);
		number = number / 10;
	}
	digits.push_back(number);
	
	for(int i = digits.size() - 1; i >= 0 ; i--) {
		result += digits[i] * multiplier;
		multiplier *= 10;
	}
	return result;
}

int main() {

	int ntests;
	cin >> ntests;

	for(int i = 0 ; i < ntests; i++) {
		int n1, n2;
		cin >>	n1 >> n2 ;
		cout << reverse_number(reverse_number(n1) + reverse_number(n2)) << endl; 
	}
	return 0;
}