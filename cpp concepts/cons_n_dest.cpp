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
    //default constructor
    Cars()
    {
        cout<<"default constructor is called "<<endl;
       // company_name="Toyota";
       
    }
    //parameterized constructor
    Cars(string cname ,string mname , string ftype , float m, double p)
    {   
        cout<<"parameterized constructor is called "<<endl;
        company_name=cname;
        model_name=mname;
        fuel_type=ftype;
        mileage=m;
        price=p;
    }
    //copy constructor
    Cars(Cars &obj){
        
        cout<<"copy constructor is called "<<endl;
        company_name=obj.company_name;
        model_name=obj.model_name;
        fuel_type=obj.fuel_type;
        mileage=obj.mileage;
        price=obj.price;
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
        cout<<"Car price - "<<price<<endl<<endl;
    }
    //destructor
    ~Cars()
    {
        cout<<"destructor called"<<endl;
    }

};

int main()
{
    Cars car1, car2("Toyota ", "Fortuneer","Disel",10,350000) ; //setting data in car2 using constructor 
    car1.setData("Toyota" , "altis" , "petrol", 15.5,150000); //--->using member function
    car1.displayData();
    car2.displayData();
    Cars car3=car1;//copy constructor is called
    car3.displayData();

    return 0;
}