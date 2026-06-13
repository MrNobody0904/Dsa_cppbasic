# include<bits/stdc++.h>
using namespace std ;
 // std ko define kar diya phele  to its STL
void print(){ // STL of fuction  void will not return anything

   cout<<"Raj"<<endl;
}
int sum(int a,int b){ // STL fuction which give  the return value 
    return a+b;
}

int main(){
    print();
    int s = sum(2,5); // call fuction from int sum 
    cout<< s<<endl;// prints 7 
    return 0;
}