# include<iostream>
using namespace std;
class Teacher{
private:
    string department;
    string dateofjoining;
public:
    void setData(string dept, string doj){
        department = dept;
        dateofjoining = doj;
    }

    void getData(){
        cout<<" department : "<<department<<endl;
        cout<<" date of joining : "<< dateofjoining<<endl;

    }

};
int main (){
    Teacher t1;

    t1.setData("cs","19/june/2029");
    t1.getData();

    return 0;
}