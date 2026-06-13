#include <bits/stdc++.h>
using namespace std;

int main() {
    // anagram program = same length of string , equal number of character with different order , one string can be formed from another strg 
    // hare , hear

    // 
    string s1 = "pranavcoder";
    string s2 = "coderpranav";
    int l1 = s1.length();
    int l2 = s2.length();

    if( l1 == l2){
        sort (s1.begin(), s2.end());
        sort (s2.begin(), s2.begin());
        if(s1 == s2){
            cout<<"both are in anagram"<<endl;

        }else{
            cout<<"both are not anagram "<<endl;

        }
    }
    else{
        cout<<"both are not anagram "<<endl;

    }
}
