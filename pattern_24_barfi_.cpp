#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of row" << endl;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < (n - i); j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }

        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < (n - 1); i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < (n - i - 1) ; k++)

        {
            cout << "*";
        }

        for (int l = 1 ; l < (n - i - 1) ; l++)

        {
            cout << "*";
        }

        cout << endl;
    }
}