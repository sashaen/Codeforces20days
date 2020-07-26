#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int k;
		cin>>k;
if(k<=2)
cout<<"NO"<<endl;
else{
		
		int mid=(k/2)-1;
		int as=0; 
		vector<int>arr;
		for(int j=0; j<=mid; j++){
			as=as+2;
			arr.push_back(as);
		}
		int ass=-1;
		for(int j=mid+1; j<k-1; j++){
			ass=ass+2;
			arr.push_back(ass);
		}
		
		int sum=0;
		for(int j=0; j<=mid; j++){
			sum=sum+arr[j];
		}
		int vum=0;
	for(int j=mid+1; j<k-1; j++){
		vum=vum+arr[j];
	}
	
	int final=sum-vum;
	if(final%2==0)
	cout<<"NO"<<endl;
	
	else{
		arr.push_back(final);
		cout<<"YES"<<endl;
		for(int j=0; j<k; j++)
		cout<<arr[j]<<" ";
		cout<<endl;
	}}
		
		
	}
}