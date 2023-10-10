//cpp structure implementation

#include <iostream>
using namespace std;

struct book{
    int bookid;
    char title[20];
    float price;
};
void display(book);            
book input();

int main()
{
  book b1;                  //using struct keyword is optional in cpp
  b1=input();
  display(b1);                //function call by passing structure
}

book input()
{
    book b;
    cout<<"Enter book id , title and price of book";
    cin>>b.bookid>>b.title>>b.price;
    return (b);
}

void display(book b)           //function by passing structure
{
    cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<b.price;
}