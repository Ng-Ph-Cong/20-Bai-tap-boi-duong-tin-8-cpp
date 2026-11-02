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
    cout << "Nhập số phần tử có trong danh sách: ";
    cin >> pt;

    vector<int> A(pt);
    vector<double> B;
    vector<double> kq;
    int TBC;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập số phần tử thứ " << i+1 << ": ";
        cin >> A[i];
        B.push_back(sqrt(A[i]));
    }

    cout << "Nhập trung bình căn: ";
    cin >> TBC;

    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] > TBC)
        {
            kq.push_back(B[i]);
        }

    
    }

    if (kq.size() > 1)
    {
        cout << "Lớn hơn: ";
        for (int i = 0; i < kq.size(); i++)
        {
        cout << kq[i] << " ";
        }
    }
    else
    {
        cout << "không có";
    }

    return 0;
}