#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int flag=0;
	int i=0; 
	while(flag==0){
		if(i>s.size()-1)
		break;
		
		else if(s[i]=='.'){
		cout<<"0";
		i++;
		}
		else if(s[i]=='-'&&s[i+1]=='.'){
			cout<<"1";
			i=i+2;
		}
		else if(s[i]=='-'&&s[i+1]=='-'){
			cout<<"2";
			i=i+2;
		}
	}
	return 0;
	
}