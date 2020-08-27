#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[n];
	int in=0,out=1001;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
		if(a[i]>b[i])swap(a[i],b[i]); // for making every less point the initial pt of player
		in=max(a[i],in); // for choosing  maximum value of initial pt of player
		out=min(b[i],out); // for choosing the least no, of final pt of player..
		
	}
	if(in<out){
		if(m>=in && m<=out)cout<<0<<endl;
		else{
		int o,p;
		o=abs(m-in);
		p=abs(m-out);
		cout<<min(o,p)<<endl;}
	}
	else cout<<-1;
	return 0;
}
