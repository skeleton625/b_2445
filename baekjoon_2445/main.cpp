#include <iostream>
using namespace std;

int main()
{
	int l;
	cin >> l;
	for (int i = 0; i < l; i++) {
		for (int j = 0; j <= i; j++) cout << "*";
		for (int j = 2 * (l - i-1); j > 0; j--) cout << " ";
		for (int j = 0; j <= i; j++) cout << "*";
		cout << endl;
	}
	for (int i = l-1; i > 0; i--) {
		for (int j = i; j > 0; j--) cout << "*";
		for (int j = 0; j < 2*(l-i); j++) cout << " ";
		for (int j = i; j > 0; j--) cout << "*";
		cout << endl;
	}
	return 0;
}