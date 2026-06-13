# include<bits/stdc++.h>
using namespace std ;
int main(){
       // sum of digit 
      int n , s = 0, r;
      cout<<"enter the number : "<<endl;
      cin>>n; 
      while( n>0 ){
        r = n % 10 ;
        s = s + r ;
        n = n /10 ;
      }
      cout << "sum of digit "<<s <<endl;
      return 0;
}