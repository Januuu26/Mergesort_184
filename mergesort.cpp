#include <iostream>
using namespace std;

/// create main array & temp array
int arr[20], B[20];
// n is array input size
int n;

void input()
{
    while (true)
    {
        cout << "Masukan panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;   
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
cout << "\n-------------------" << endl;
cout << "\nInput isi element array" << endl;
cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}