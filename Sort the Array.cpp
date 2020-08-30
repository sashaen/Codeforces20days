#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	int ar[a];
	for(int i=0;i<a;i++)cin>>ar[i];
	int left=0, right=0,out=0;
	for(int i=0; i<a-1;i++){
		
		if(ar[i]>ar[i+1]){
			left=i;
			break;
		}
	}
	
	for(int i=a-1; i>0;i--){
		
		if(ar[i-1]>ar[i]){
			right=i;
			break;
		}
	}
	
	reverse(ar+left,ar+right+1);
	for(int i=0; i<a-1;i++){	
		if(ar[i]>ar[i+1]){
			out=1;
			break;
		}}
	
	if(out==1){
		cout<<"no"<<endl;
	}
	else{
		cout<<"yes"<<endl;
		cout<<left+1<<" "<<right+1<<endl;
	}
	
	return 0;
	
}
