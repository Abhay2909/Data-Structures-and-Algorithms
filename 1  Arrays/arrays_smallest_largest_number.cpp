#include <iostream>
#include <climits>
using namespace std;

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

	int largest=INT_MIN;
	int smallest=INT_MAX;

	for(int i=0;i<n;i++){
		// if(a[i]>largest){
		// 	largest=a[i];
		// }
		// if(a[i]<smallest){
		// 	smallest=a[i];
		// }

		// Instead of using if else condition, use inbuilt function
		largest=max(largest,a[i]);
		smallest=min(smallest,a[i]);
	}

	cout<<"Largest "<<largest<<endl;
	cout<<"smallest "<<smallest<<endl;

return 0;
}