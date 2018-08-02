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

/*
int k = 1;

	for (int i = 1; i > 0; i+=k) {
		for (int j = 1; j <= i; j++)printf("*");
		for (int j = 1; j <= (n - i) * 2; j++)printf(" ");
		for (int j = 1; j <= i; j++)printf("*");
		if (i == n)k *= -1;
		printf("\n");
	}
*/