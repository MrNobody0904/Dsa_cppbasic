
#include <bits/stdc++.h>
using namespace std;

int main() {
     // remove the vowel from string
     string s;
     cout<<"enter the string : "<<endl;
     getline(cin,s); // we also use the getline(cin,s)
     for(int i = 0;i<s.length();i++){
         if(s[i]=='a' || s[i] =='A'){
            continue;
         } else if(s[i] == 'e'|| s[i] == 'E'){
             continue;
         }else if(s[i] == 'i'|| s[i] == 'I'){
            continue;
         }else if(s[i] == 'o'|| s[i] == 'O'){
            continue;
         }else if(s[i] == 'u'|| s[i] == 'U'){
            continue;
         }  else if(s[i] == 's'|| s[i] == 'S'){
            continue;
         }   else{
            cout<<s[i];
         }          
     }

}