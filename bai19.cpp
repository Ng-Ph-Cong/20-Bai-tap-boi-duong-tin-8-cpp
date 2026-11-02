#include <iostream>
#include <vector>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int pt;
    cout << "Nhập số pt có trong danh sách: ";
    cin >> pt;

    vector<int> A(pt);
    vector<double> A_sqrt(pt);
    int a;
    int b;
    int kq = 0;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập phần tử thứ " << i+1 << ": ";
        cin >> A[i];
        A_sqrt[i] = sqrt(A[i]);
    }

    cout << "Nhập a = ";
    cin >> a;
    cout << "Nhập b = ";
    cin >> b;

    for (int i = 0; i < A.size(); i++)
    {
        if ( A_sqrt[i] >= a and A_sqrt[i] <= b)
        {
            kq += 1;
        }
    }

    cout << kq;

    return 0;
}