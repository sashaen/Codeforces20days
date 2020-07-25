#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	int ar[a];
	for(int i=1;i<=a;i++)
	{	cin>>b;
		ar[b]=i;}
		
	for(int i=1;i<=a;i++){
		cout<<ar[i]<<" ";
	}
	return 0;
	
}