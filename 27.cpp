#include <iostream>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int ntests;
	cin >> ntests;
	for(int t = 0 ; t < ntests ; t++) {
		int naccounts;
		unordered_map<string, int> account_hashtable;
		set<string> account_set;
		
		cin >> naccounts;
		cin.ignore();
 
		for(int i = 0 ; i < naccounts ; i++) {
			char temp[50];
			cin.getline(temp, 50);
			string account_number(temp);
			
			account_set.insert(account_number);
			int currentValue = account_hashtable[account_number];
			account_hashtable[account_number] = ++currentValue;
		}
		
		for(std::set<string>::iterator it=account_set.begin(); it!=account_set.end(); ++it) {
			cout << *it << " " << account_hashtable[*it] << endl;
		}
		
		cout << endl;
	}

	return 0;
}