# include<iostream>
using namespace std;
class Employee
{
    public:
    int eid;
    string ename;
    int esalary;

    void getdata()
    {
        cout<<"Enter Employee ID: ";
        cin>>eid;
        cin.ignore();
        cout<<"Enter Employee Name: ";
        getline(cin,ename);
        cout<<"Enter Employee Salary: ";
        cin>>esalary;

    
    }
    void display()
    {
        cout<<"***************EMPLOYEEE DETAILS*************"<<endl;
        cout<<"Employee ID: "<<eid<<endl;
        cout<<"Employee Name: "<<ename<<endl;
        cout<<"Employee Salary: "<<esalary<<endl;
    }
    
};

int main()
{
    Employee e1;
    e1.getdata();
    e1.display();
    return 0;
}
