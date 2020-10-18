#include <iostream>
using namespace std;

int binary_search(int a[],int n,int key){

	int s=0;
	int e=n-1;

	while(s<=e){
		int mid=(s+e)/2;

		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
	return -1;
}

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

	cout<<binary_search(a,n,key)<<endl;

return 0;
}