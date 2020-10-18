#include <iostream>
using namespace std;

void selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		// find out the smallest element idx in the unsorted part
		int min_idx=i;
		for(int j=i;j<n;j++){
			if(a[j]<a[min_idx]){
				min_idx=j;
			}
		}
		// after this loop we can do swap finally
		swap(a[i],a[min_idx]);
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

	selection_sort(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}


return 0;
}