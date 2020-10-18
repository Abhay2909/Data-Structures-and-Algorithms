#include <iostream>
using namespace std;

int main(){

	#ifndef O_j
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	int n,key;
	cin>>n;

	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cin>>key;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<key<<" found at "<<i<<" index"<<endl;
			break;
		}
	}
	if(i==n){
		cout<<key<<" is not present "<<endl;
	}

return 0;
}