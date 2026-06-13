#include<bits/stdc++.h>
using namespace std;

void explainVector() {

    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v3(4,100);
    vector<int> v4(4);

    vector<int> v1(5,10);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin(); 
    it++;

    cout << *it << endl;   // 20

    vector<int>::iterator it2 = v.end();//{10,20,30,40} end point the outside 

    vector<int>::reverse_iterator rit = v.rbegin();
    vector<int>::reverse_iterator rit2 = v.rend(); // reverse the end {10,20,30,40}

    cout << v[0] << " " << v.at(0) << endl;

    cout << v.back() << endl;

    //how to print the vector 
    for(vector<int>::iterator it=v.begin(); it != v.end();it++){
        cout<<*(it) <<" ";
    }
    // auto is short syntax for the print means auto assignation of data type
    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it)<< " "; 
    }
    for(auto it :v){
        cout<< it <<" ";
    }
    //ERASE
    //{10,20,30,40} = {10,30,40}
    v.erase(v.begin()+1);
    //INSERT
    //insert any datatype 
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10);// 2means 2 times 10 , {300,10,10,100,100}
    // copy 
    vector<int>copy(2,50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}
    cout<<v.size();

    // {10,20}
    v.pop_back();// reuslt = {10}


    // swap method 
    //v1 ->{1,2}
    //v2 ->{3,4}
    v1.swap(v2); //v1 ->{3,4}, v2 ->{1,2}
    v.clear();


}

int main() {
    explainVector();
    return 0;
}


/// this the gpt code///
#include <bits/stdc++.h>
using namespace std;

void explainVector() {

    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);
    v.push_back(40);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v3(4, 100); // {100,100,100,100}
    vector<int> v4(4);      // {0,0,0,0}

    vector<int> v1(5, 10);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;

    cout << *it << endl; // 20

    vector<int>::iterator it2 = v.end();
    vector<int>::reverse_iterator rit = v.rbegin();
    vector<int>::reverse_iterator rit2 = v.rend();

    cout << v[0] << " " << v.at(0) << endl;
    cout << v.back() << endl;

    // Print using iterator
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Print using auto
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Range-based loop
    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // ERASE
    // {10,20,30,40} -> {10,30,40}
    v.erase(v.begin() + 1);

    cout << "After erase: ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    // INSERT
    vector<int> v5(2, 100); // {100,100}

    v5.insert(v5.begin(), 300);
    // {300,100,100}

    v5.insert(v5.begin() + 1, 2, 10);
    // {300,10,10,100,100}

    vector<int> copy(2, 50); // {50,50}

    v5.insert(v5.begin(), copy.begin(), copy.end());
    // {50,50,300,10,10,100,100}

    cout << "v5: ";
    for (auto x : v5) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Size of v5: " << v5.size() << endl;

    // POP_BACK
    v5.pop_back();

    cout << "After pop_back: ";
    for (auto x : v5) {
        cout << x << " ";
    }
    cout << endl;

    // SWAP
    vector<int> a = {1, 2};
    vector<int> b = {3, 4};

    a.swap(b);

    cout << "a after swap: ";
    for (auto x : a) {
        cout << x << " ";
    }
    cout << endl;

    cout << "b after swap: ";
    for (auto x : b) {
        cout << x << " ";
    }
    cout << endl;

    // CLEAR
    v.clear();

    cout << "v size after clear: " << v.size() << endl;
    cout << "Is v empty? " << v.empty() << endl;
}

int main() {
    explainVector();
    return 0;
}