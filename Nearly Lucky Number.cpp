#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
    int a;
    cin>>a;
    int aa=a;
    int k=0;
    while(aa!=0) {
        aa=aa/10;
        k++;
        }
        
 
    k=k-1;
    int b, s=0;
    while(k>-1){
    	int h=pow(10,k);
        b=a/h;
 
        if(b==7 || b==4)s++;
        a=a%h;
        k--;
    }
 
    if(s==7)cout<<"YES"<<endl;
    else if(s==4)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}