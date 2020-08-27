#include<bits/stdc++.h>
#define long long int
using namespace std;
signed main(){
int n,m;
cin>>n>>m;
int ar[n];
for(int i=0;i<n;i++)cin>>ar[i];
sort(ar,ar+n);
 int max=-1;
for(int i=0;i<n-1;i++){
    if(ar[i+1]-ar[i]>max)max=ar[i+1]-ar[i];
}
double c= max;
	c=c/2;
double aa=ar[0];
double qq=ar[n-1];
double rr=m;
double bb= rr-qq;	
	if(aa>=c && aa>=bb)cout<<fixed<<setprecision(10)<<aa<<endl;
	else if(bb>=aa && bb>=c)cout<<fixed<<setprecision(10)<<bb<<endl;
	else cout<<fixed<<setprecision(10)<<c<<endl;


return 0;}
