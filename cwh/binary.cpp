#include <iostream>
#include <string.h>
using namespace std;

// Program to find if string is binary or no and if binary then display its 1's complement

class binary{

    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};


void binary :: read(void){

    cout<<"Enter a Binary Number:";
    cin>>s;
}

void binary :: chk_bin(void){

    for(int i = 0; i<s.length(); i++){

        if(s.at(i)!='0' && s.at(i)!='1'){

            cout<<"Incorrect Binary Foramt"<<endl;
            exit(0);
        }

    }
}

void binary :: ones(void){

    chk_bin();

    for(int i = 0; i<s.length(); i++){

        if(s.at(i) =='0'){

            s.at(i) = '1';
        }

        else{

            s.at(i) = '0';
        }

    }


}

void binary :: display(void){

    for(int i = 0; i<s.length(); i++){
        cout<<s.at(i);
    }
}

int main(){

    binary b;

    b.read();
    // b.chk_bin();
    b.ones();
    b.display();
}