
#include <bits/stdc++.h>
using namespace std;

int main() {
   // maximum elemnt in array 
   int n;
   cout<<"enter size : "<<endl;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int max = arr[0]; // ek vector banya 
   for(int i=0;i<n;i++){
      if(max <arr[i]){
        max =arr[i];
      }
   }
   cout<<"max "<<max<<endl;
}