//function as a member in structure

#include <iostream>
using namespace std;

struct book{
    private:      //access specifier 

    int bookid;
    char title[20];
    float price;

    public:      //access specifier 
    void input()
    {
        cout<<"Enter bookid, title and price :  ";
        cin>>bookid>>title>>price;
        if(bookid<0)
        bookid=-bookid;  //data security
    }
    //function as a member in structure
    void display()
    {
      cout<<"\n"<<bookid<<" "<<title<<" "<<price;
    }
};

int main()
{
    book b1;
    b1.input();
    b1.display();
    return 0;
}