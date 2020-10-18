#include <bits/stdc++.h>
using namespace std;

// Define a comparator function
bool compare(int a, int b){
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a>b;
}

int main(){

	#ifndef O_j
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	int a[1000];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	// Sort an array using sort() function, more efficient
	sort(a,a+n,compare);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

return 0;
}