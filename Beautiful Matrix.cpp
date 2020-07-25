#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,m,n,g=0;
	for(int i=1;i<=5;i++){
		for(int j=1; j<=5; j++){
			cin>>a;
			if(a==1){
				m=i;
				n=j;
				g=1;
				break;
			}
			if(g==1)
			break;}}
	if(m==3){
		g=abs(3-n);
		cout<<g;
	}
	else if(n==3){
		g=abs(3-m);
		cout<<g;
	}
	
	else{
		g=abs(3-n)+abs(3-m);
		cout<<g;
	}
	return 0;
}
		
	
