#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1,b1;
	cin>>a1>>b1;
string a[b1];
string b[b1];
	for(int i=0;i<b1;i++){
	
		cin>>a[i];
		cin>>b[i];
	}
	 string c[a1];
	 for(int i=0;i<a1;i++)cin>>c[i];
	 // main task
	 
	 for(int i=0; i<a1; i++){
	 	for(int j=0;j<b1; j++){
	 		if(c[i]==a[j] || c[i]==b[j]){
	 			int o=a[j].size();
	 			int p=b[j].size();
	 			if(o>p)cout<<b[j]<<" ";
	 			else cout<<a[j]<<" ";
			 }
		 }
	 }
	 
	 return 0;
}
	 
	 
		
	
	
