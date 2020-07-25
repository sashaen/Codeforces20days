#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,v=0;
	cin>>n>>k;
	int ar[n];
	for(int i=0; i<n;i++)
	cin>>ar[i];

	for(int i=0; i<n; i++){
		int g=ar[i];
		int co=0;
		
	    while (g != 0){ 
        	g = g / 10; 
        	co++; 
	    }
	    
	    int q,h=ar[i],r=0,a,m=co;
        for(int w=0;w<m;w++){
    		q=pow(10,co-1);
    		a=h/q;
    		if(q==1)a=h;
    		if(a==4||a==7)r++;
    		h=h%q;
    		co--;
        }
    	
		if(r<=k)v++;
	}
	
	cout<<v<<endl;
	return 0;
}
