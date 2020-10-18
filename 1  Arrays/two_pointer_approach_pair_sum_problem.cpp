#include <iostream>
using namespace std;

// Given a sorted array, find pair of elements that sum to K (Given)

int main(){

	#ifndef O_j
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif
	
	int a[]={1,3,5,7,10,11,12,13};
	int s=16;

	int i=0;
	int j=sizeof(a)/sizeof(int) - 1;

	while(i<j){
		int cs=a[i]+a[j];
		if(cs>s){
			j--;
		}else if(cs<s){
			i++;
		}else if(cs==s){
			cout<<a[i]<<" and "<<a[j]<<endl;
			i++;
			j--;
		}
	}

return 0;
}