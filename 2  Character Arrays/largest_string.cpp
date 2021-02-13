#include <bits/stdc++.h>
using namespace std;

int main(){

	#ifndef O_j
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	char a[1000];
	char largest[1000];

	int l=0;
	int largest_l=0;

	cin.get();

	for(int i=0;i<n;i++){
		cin.getline(a,1000);
		// cout<<a<<endl;
		l=strlen(a);
		if(l>largest_l){
			largest_l=l;
			strcpy(largest,a); // this will copy the characters from largest string to array
		}
	}

	cout<<largest<<endl;
	cout<<largest_l<<endl;

return 0;
}