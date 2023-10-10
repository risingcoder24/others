//BASIC

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     string str;
//     cout<<"Enter your name: ";
//     cin>>str;
//     cout<<"Your name is: "<<str<<endl;

//     return (0);

// }

//SWAPPING NUMBERS

// #include <iostream>
// using namespace std;

// int main(){

//     int a,b;

//     a=11;
//     b=12;

//     cout<<a<<endl<<b<<endl;

//     a=a+b;
//     b=a-b;
//     a=a-b;

//     cout<<a<<endl<<b<<endl;

//     return 0;

// }

//CONDITIONAL LOOPS

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     char ch;
//     cin>>ch;

//     if(97<=ch && ch<=122){
//         cout<<"LOWERCASE"<<endl;
//     }
//     else if(65<=ch && ch<=90){
//         cout<<"UPPERCASE"<<endl;
//     }
//     else{
//         cout<<"NUMERIC VALUE"<<endl;
//     }

//     return 0;    
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int sum = 0, num =1,n;
//     cin>>n;

//     while(num<=n){
//         sum = sum + num;
//         num = num+1; 
//     }
//     cout<<sum<<endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;


// int main(){

//     int sum = 0, i = 2, n;

//     cin>>n;

//     while(i<=n){
//         sum = sum + i;
//         i=i+2;
//     } 
//     cout<<sum<<endl;
//     return 0;
// }

//PATTERNS 

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1, n;
//     cin>> n;

//     while(i<=n){

//         int j = 1;

//         while(j<=n){
//             cout<<"*";
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }


// return 0;
    

// }

//NUMBER PATTERN

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1, n;

//     cin>>n;
//     while(i<=n){

//         int j = 1;
//         while(j<=n){
//             cout<<i;
//             j = j + 1;   

//         }
//         cout<<endl;
//         i = i+1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1, n;
//     cin>>n;

//     while(i<=n){
        
//         int j = 1;
//         while(j<=n){
//             cout<<j;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     cin>>n;

//     while(i<=n){

//         int j =n;
//         while(j<=n && j!=0){
//             cout<<j;
//             j = j - 1;
//         }

//         cout<<endl;
//         i = i + 1;
//     }

// }

//OR

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     cin>>n;

//     while(i<=n){

//         int j =n;
//         while(j<=n && j!=0){
//             cout<<j;
//             j = n - j + 1;
//         }

//         cout<<endl;
//         i = i + 1;
//     }

    
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     int count = 1;
//     cin>>n;

//     while(i<=n){

//         int j = 1;
//         while(j<=n){
//             cout<<count;
//             count++;
//             j = j + 1;
//         }

//         cout<<endl;
//         i = i + 1;
//     }


// }

//TRIANGLE PATTERN

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     cin>>n;

//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             if(j<=i){
//             cout<<"* ";
//             }
           
//             j = j+1;
//         }
//         cout<<endl;
//         i = i +  1;
//     }
// }

//NUMBER PATTERN 2

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     cin>>n;

//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<i;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     int count = 1;
//     cin>>n;

//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<count ;
//             count++;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }

// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     cin>>n;

//     while(i<=n){
//         int j = 1, value = i;
//         while(j<=i){
//             cout<<value;
//             value++;
//             j++;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){

//      int i = 1,n;
//     cin>>n;

//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<j + i - 1;
//             j++;
//         }
//         cout<<endl;
//         i = i + 1;
//     }

// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     cin>>n;

//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<i - j + 1;
//             j++;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// CHARACTER PATTERN

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1, n;
//     cin>>n;

//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A' + i - 1;
//             cout<<ch;
//             j++;
//         }

//         cout<<endl;
//         i = i + 1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     cin>>n;

//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             char ch = 'A' + j - 1;
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1,n;
//     char start = 'A';
//     cin>>n;

//     while(i<=n){

       
//         int j = 1;
//         while(j<=n){
//             cout<<start;
//             start++;
//             j++;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
// }

#include <iostream>
using namespace std;

int main(){

    int i = 1,n;
    cin>>n;

    while(i<=n){

        int j;
        while(j<=n){
            cout<< ;
        }
    }
}