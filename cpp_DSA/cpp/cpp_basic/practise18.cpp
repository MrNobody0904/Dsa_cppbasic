//https://server8.filedownloadlink.xyz/2029248.mp4
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, lcm, hcf ,r ;
    cout<<"enter the 2 number "<<endl;
    cin>>a>>b;
    while(true){
        lcm = a;
        r =a%b;
        if(r ==0 ){
            break ;

        }
        a = a *2 ;
        hcf = a*b/lcm;
        cout<<"lcm is : "<<lcm<<endl;
        cout<<"hcf is  : "<<hcf <<endl;
        
    }
}