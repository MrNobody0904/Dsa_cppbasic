#include<iostream>
using namespace std;
class Teacher{
private:
    double salary;
public:
    void setsalary(double s) {
        salary = s;

    }
    void showsalary(){
        cout<< "Your salary : "<<salary <<endl;
    }
};
    int main(){
        Teacher t1;
        t1.setsalary(400000);
        t1.showsalary();

return 0;
}
