#include <iostream>
using namespace std;

void insertion_sort(int a[],int n){
	for(int i=1;i<=n-1;i++){
		int e=a[i];
		// place the current element at 'right' position in the sorted part
		int j=i-1;
		while(j>=0 and a[j]>e){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=e;
	}
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

	insertion_sort(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

return 0;
}