#include <iostream>
using namespace std;
int main()
{
    int i, j, p;
    cout << "Enter the row size:";
    int n;
    cin >> n;

    int c_x = 1;
    int c_y = n * 2 - 1;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n * 2; j++)
        {
            if (j == c_x || j == c_y)
            {
                cout << char(i + 64);
            }
            else
            {
                cout << " ";
            }
        }
        c_x++;
        c_y--;
        cout << "\n";
    }
}
