#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	int q;
	cin>>q;
	for(int i=0; i<q; i++){
		int n;
		cin>>n;
		vector<int>ar;
		int f;
		for(int j=1;j<=n+1;j++){
			f=pow(2,j);
		/*	cout<<f<<endl;*/
			ar.push_back(f);
			
		}
	
		int s=ar.size()/2;
			
		int l=0,r=0;
		if(n>2){
		
		
		for(int j=0; j<s-1;j++){
			l=l+ar[j];
		}
		l=l+ar[n-1];
		for(int j=s-1; j<n-1;j++){
			r=r+ar[j];
		}
		}
		else{
			l=ar[0];
			r=ar[1];
		}
		
		int diff=abs(l-r);
		cout<<diff<<endl;
		
		
	}
	return 0;
}