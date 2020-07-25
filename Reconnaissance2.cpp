#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int ar[a];
	for(int i=1; i<a+1;i++)
	cin>>ar[i];
	int sum,max=1000,k,l;
	for(int i=1;i<a+1;i++){
			int j=i+1;
			if(i+1==a+1)j=1;
			sum=abs(ar[i]-ar[j]);
			if(sum<max){
				max=sum;
				k=i;l=j;
			}}
		
	cout<<k<<" "<<l<<endl;
	return 0;
}
