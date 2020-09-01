#include<bits/stdc++.h>

#define int long long
using namespace std;
 bool lset( int sqr2 ){
 	if(sqr2<2)return false;
 	else if(sqr2==2)return true;
 	if(sqr2%2==0)return false;
 
	
	int sqr3=sqrt(sqr2);
	
	for(int j=3; j<=sqr3; j+=2) {
		if(sqr2%j==0)
		 return false;
	}
	return true;
 }

signed main(){
	int a;
	cin>>a;
	while(a--){
	int b,c=1,d=1;
	cin>>b;
	int sqr2= sqrt(b);
	if(sqr2*sqr2==b && lset(sqr2)==true)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	

}
	return 0;
}
// 
