// function overloading (area of circle and rectangle)

#include <iostream>
using namespace std;
int area(int, int);
float area(int);

int main()
{

    int l, b, area_of_rectangle;
    float r, area_of_circle;

    cout << "Enter values of l and b : ";
    cin >> l >> b;
    area_of_rectangle = area(l, b);
    cout << area_of_rectangle << endl;
    cout << "Enter the value of r : ";
    cin >> r;
    area_of_circle = area(r);
    cout << area_of_circle << endl;
}

int area(int L, int B)
{

    return (L * B);
}

float area(int R)
{

    return (3.14 * R * R);
}