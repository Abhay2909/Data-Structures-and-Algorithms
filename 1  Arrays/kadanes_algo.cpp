#include <iostream>
using namespace std;

int main(){

	#ifndef O_j
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n;
	cin>>n;

	int a[1000];
	int cs=0;
	int ms=0;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		cs+=a[i];
		if(cs<0){
			cs=0;
		}
		ms=max(ms,cs);
	}
	cout<<ms;

return 0;
}