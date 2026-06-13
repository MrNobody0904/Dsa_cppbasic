# include<bits/stdc++.h>
using namespace std ;
int main(){
     //fibunaci series = 0 1 1 2 3 5 8 13 21 34 55 ....
     int n1 = 0, n2 = 1, n3,i;
     cout<<n1<<n2;
     for(i=1;i<=10;i++){
        n3 = n1+n2;
        n1 = n2 ;
        n2 = n3 ;
        cout << n3 ;

     }
    return 0;

}