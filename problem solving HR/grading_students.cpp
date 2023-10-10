#include <iostream>
using namespace std;

int main()
{
    int n, i, g, r, result;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> g;
        if (g < 38)
        {
            cout << g << endl;
        }

        else if (g >= 38)
        {
            r = g % 5;
            result = (g - r) + 5;
            if (result - g < 3)
            {
                cout << result << endl;
            }

            else
            {
                result = (g);
                cout << result << endl;
            }
        }
    }

    return 0;
}