#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;

	
for(int y=0; y<t; y++){
	for(int i=1; i<n;i++){
	
		 if(s[i]=='G'&&s[i-1]=='B'){
				s[i]='B';
				s[i-1]='G';
++i;
				
				
			}
		
		
	}

}
	cout<<s;
	return 0;
		}
		
		
		
	
