#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int sum=0,p;
	
	for(int i=0;i<a.size();i++){
		if(a[i]==b[i]||a[i]-32==b[i]||a[i]==b[i]-32)sum++;
		else if(a[i]!=b[i]){
		transform(a.begin(),a.end(),a.begin(),::tolower);
		transform(b.begin(),b.end(),b.begin(),::tolower);
		if(a[i]>b[i]){
		cout<<1<<endl;
		break;}
		else{
		cout<<-1<<endl;
		break;}}
	}
	if(sum==a.size())cout<<0<<endl;
    return 0;
}