#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	int ar[a];
	for(int i=0; i<a; i++)cin>>ar[i];
	sort(ar,ar+a);
	int sum=0,d=sum;
	for(int i=0; i<b;i++){
		d=sum;
		sum+=(ar[i]);
		if(d<sum){
			sum-=ar[i];
			break;
		}	}
	
	cout<<abs(sum)<<endl;
	
	return 0;	
}