#include<iostream>
using namespace std;
# define ll long long 
class Teacher{
    public:
    
    string name;
    ll salary ; 
    string dept;
    
    void display(){
        cout<<"name "<<name <<endl;
        cout<<"Department "<< dept <<endl;
        cout<<"Salarty "<< salary <<endl;
    }
    
};

int main(){
    Teacher t1;
    t1.name = "Pranav ";
    t1.dept ="Cs";
    t1.salary = 50000;

    t1.display();

    return 0;
}