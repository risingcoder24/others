#include <iostream>
using namespace std;

class Employee
{

    int id;
    static int count;

public:
    void setData(void)
    {

        cout << "Enter the Id: " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {

        cout << "The Id of this employee is : " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {

        cout << "The value of Count is : " << count << endl;
    }
};

int Employee :: count; // static variable declaration whose default value is zero

int main()
{

    Employee Khushi, Nikita;

    Khushi.setData();
    Khushi.getData();
    Employee::getCount();

    Nikita.setData();
    Nikita.getData();
    Employee::getCount();

    return 0;
}
