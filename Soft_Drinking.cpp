#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int  n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int ist=(k*l)/nl; //cout<<ist<<endl;
	int sec=c*d;   //cout<<sec<<endl;
	int thrd=p/np; //cout<<thrd<<endl;
	if(ist<n||sec<n||thrd<n)cout<<0<<endl;
	else 
	{
		if(ist<sec&&ist<thrd)cout<<ist/n<<endl;
		else if(sec<ist&&sec<thrd)cout<<sec/n<<endl;
		else cout<<thrd/n<<endl;
}
	return 0;
}