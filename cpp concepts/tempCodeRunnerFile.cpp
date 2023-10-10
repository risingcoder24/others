#include <iostream>
#include <string>
using namespace std;

class Cars
{
    private:
    //data members
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

    public:

    Cars()
    {
        //cout<<"default constructor is called ";
        company_name="Toyota";
        model_name="altis";
        fuel_type="petrol";
        mileage=15.5;
        price= 150000;
    }
    //member function
    void setData(string cname, string mname, string ftype ,float m, double p)
    {
        company_name=cname;
        model_name=mname;
        fuel_type=ftype;
        mileage=m;
        price=p;
    }
    
    void displayData()
    {
        cout<<"Car properties"<<endl;
        cout<<"Car company name - "<<company_name<<endl;
        cout<<"Car company model - "<<model_name<<endl;
        cout<<"Car fuel type - "<<fuel_type<<endl;
        cout<<"Car mileage - "<<mileage<<endl;
        cout<<"Car price - "<<price<<endl;
    }

};

int main()
{
    Cars car1 , car2;
    //car1.setData("Toyota" , "altis" , "petrol", 15.5,150000);
    car1.displayData();
    return 0;
}