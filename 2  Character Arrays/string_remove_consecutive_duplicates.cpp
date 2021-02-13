#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(char a[]){

	int l=strlen(a);
	if(l==1 or l==0){
		return;
	}
	int prev=0;
	for(int current=1;current<l;current++){
		if(a[current]!=a[prev]){
			prev++;
			a[prev]=a[current];
		}
	}
	a[prev+1]='\0';
	return;
}

int main(){

	#ifndef O_j
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	char a[1000];
	cin.getline(a,1000);
	removeDuplicates(a);
	cout<<a;

return 0;
}