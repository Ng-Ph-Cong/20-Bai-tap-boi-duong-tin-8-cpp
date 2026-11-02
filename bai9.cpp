#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int pt;
    cout << "Nhập số phần tử có trong danh sách: ";
    cin >> pt;

    vector<float> A(pt);

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập phần tử thứ " << i +1 << ": ";
        cin >> A[i];
    }

    double nho_nhat = A[0];
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < nho_nhat)
        {
            nho_nhat = A[i];
        }
    }

    cout << "Số nhỏ nhất là: " << nho_nhat;
    
    return 0;
}