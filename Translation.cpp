#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int o=a.size(),k=0;
	for(int i=0; i<a.size(); i++){
		if(a[i]!=b[o-1-i]){cout<<"NO"<<endl; k=1; break; }
	}
	if(k==0) cout<<"YES"<<endl;
	return 0;
}