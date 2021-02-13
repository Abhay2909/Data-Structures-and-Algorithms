#include <bits/stdc++.h>
using namespace std;
// Read a sentence/paragraph and store it
// cin.get() reads a single character
// put a loop to read characters till you get a newline

void readline(char a[],int maxlen,char delim='\n'){
	int i=0;
	char ch=cin.get();
	while(ch!=delim){
		a[i]=ch;
		i++;
		if(i==(maxlen-1)){
			break;
		}
		ch=cin.get();
	}
	a[i]='\0';
	return;
}

int main(){

	#ifndef O_j
	freopen("input1.txt","r",stdin);
	freopen("output1.txt","w",stdout);
	#endif

	char a[1000];
	// readline(a,1000,'$');
	// we dont need to use above method, as we have another method as well

	cin.getline(a,1000,'$');
	cout<<a<<endl;


return 0;
}