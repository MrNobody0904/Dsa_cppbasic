#include <bits/stdc++.h>
using namespace std;

int main() {
    // HCF PROGRAMME 
     int a , b, lcm, r ;
    cout<<"Enter the 2 number "<<endl;
    cin>>a>>b;
    while(true){
        r = a % b;
        if( r == 0){
            break;
        }
        a = a * 2;

    }
    cout<<"lcm  is : "<< lcm <<endl ;
    return 0; 
}