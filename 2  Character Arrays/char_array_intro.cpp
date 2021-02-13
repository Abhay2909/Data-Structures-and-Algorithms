#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef O_j
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 4, 5};
	cout << arr << endl;

	char a[] = {'a', 'b', 'c', 'd'};
	cout << a << endl;

	// we can get garbage value as printed in the above example, so use null character
	char b[] = {'a', 'b', 'c', 'd', '\0'};
	cout << b << endl;

	// Input
	char s[10];
	cin >> s;
	cout << s << endl;

	char s1[] = {'h', 'e', 'l', 'l', 'o'};
	char s2[] = "hello";

	cout << sizeof(s1) << endl;
	cout << sizeof(s2) << endl;



	return 0;
}