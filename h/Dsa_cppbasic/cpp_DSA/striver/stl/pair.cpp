#include<bits/stdc++.h>
using namespace std;

// pairs
void explainPair() {
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl; // p.first means 1, 

    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout << p1.first << " "
         << p1.second.second << " " // p1 ke {3,4} second part 4 amd print 1 4 3
         << p1.second.first << endl;

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};

    cout << arr[1].second << endl; // array m "1" = {2,5} second part is 5 print 5 
}

int main() {
    explainPair();
    return 0;
}