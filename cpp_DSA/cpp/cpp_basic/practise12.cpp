# include<bits/stdc++.h>
using namespace std ;
int main(){
      
    int n , i;
    cout<<"enter the number : "<<endl;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%2 == 0){
            cout<<"its is not a prime "<<endl;
            break;
        }
    }
    if(n == i){
        cout<<"it is prime"<<endl;
    }
    return 0;

}