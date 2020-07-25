#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;cin>>a;
int ar[a];
for(int i=0;i<a;i++)cin>>ar[i];
int max=*max_element(ar,ar+a);
int min=*min_element(ar,ar+a);
int j,k=0;
for(int i=0;i<a;i++){
	if(ar[i]==max){
	j=i;
	break;
}}
int temp,result=0;
for(int i=j;i>0;i--){
	temp=ar[i];
ar[i]=ar[i-1];
ar[i-1]=temp;

result++;
}
//cout<<result<<" ";
for(int i=0;i<a;i++){
	if(ar[i]==min)
{
	if(k<i)k=i;
}
}
//cout<<k<<" ";
int gh=abs(a-1-k);
result+=gh;
cout<<result;
return 0;
	
}
