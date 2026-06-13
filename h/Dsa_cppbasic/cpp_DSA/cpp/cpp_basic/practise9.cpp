# include<bits/stdc++.h>
using namespace std ;
int main(){
       //check the vowel if- else statement 
         char s;
         cout<<"enter the character : "<<endl;
         cin>>s;
         if(s == 'a'|| s == 'A'||s == 'e'|| s == 'E'||s == 'i'|| s == 'I'||s == 'o'|| s == 'O'||s == 'u'|| s == 'U'){
            cout<<"its the vowel"<<endl;

         }else
         cout<<"its the consonent"<<endl;

      // switch case se bhi bana sakte h 
      switch(s){
        case 'a':
        cout<<"vowel";
        break;
      }
    return 0;

}
