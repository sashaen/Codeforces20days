#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int o=a.size(),k=0;
	for(int i=o-1; i>=0; i--){
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='a'||a[i]=='u'||a[i]=='y'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y')
	{
		cout<<"YES"<<endl;
		break;
	}
	else if(a[i]==' '||a[i]=='?')k=0;
	
	else{
	 cout<<"NO"<<endl;
	 break;
	}}
	
	return 0;
}