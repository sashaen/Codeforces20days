#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n;i++)
	cin>>ar[i];
	int a=0,b=0,c=0;
	for(int i=0; i<n; i+=3){
		a+=ar[i];
			if(i==n-1)break;
		b+=ar[i+1];
			if(i+1==n-1)break;
		c+=ar[i+2];
			if(i+2==n-1)break;
	}
	
	if(a>b&&a>c)cout<<"chest"<<endl;
	else if(b>a && b>c)cout<<"biceps"<<endl;
	else cout<<"back"<<endl;
	return 0;
}