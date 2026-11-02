#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int pt;
    cout << "nhập số phần tử có trong danh sách: ";
    cin >> pt;

    vector<double> A(pt);
    vector<double> Kq;
    int x;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập phần tử thứ " << i +1 << ": ";
        cin >> A[i];
    }

    cout << "nhập x = ";
    cin >> x;

    for (int i = 0; i <A.size(); i++)
    {
        if (A[i] > x)
        {
            Kq.push_back(A[i]);
        }
    }

    cout << "Các số lớn hơn " << x << " là: ";

    for (int i = 0; i < Kq.size(); i++)
    {
        cout << Kq[i] << " ";
    }

    return 0;
}