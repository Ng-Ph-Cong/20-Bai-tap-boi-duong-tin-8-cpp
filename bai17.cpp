#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
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
    int TBC;
    double gan_nhat = 0;
    double kcgg = 9999;
    int vitri = 0;


    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập phần tử thứ " << i+1 << ": ";
        cin >> A[i];

        B.push_back(sqrt(A[i]));
    }

    cout << "Nhập trung bình căn: ";
    cin >> TBC;

    for (int i = 0; i < B.size(); i++)
    {
        double kc = abs(B[i] - TBC);
        if (kc < kcgg)
        {
            kcgg = kc;
            gan_nhat = B[i];
            vitri = i;
        }
    }

    cout << "Gần nhất: " << A[vitri];
    return 0;
}