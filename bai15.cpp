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
    cout << "Nhập số phần tử trong danh sách: ";
    cin >> pt;

    vector<double> A(pt);
    int kc_nn = 999;
    double soone, sotwo;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhập phần tử thứ " << i+1 << ": ";
        cin >> A[i];
    }

    if (A.size() > 2)
    {
        for (int i = 0; i < A.size() - 1; i++)
    {   
        for (int j = i +1 ; j < A.size(); j++ )
        {
            double kc = abs(sqrt(A[i]) - sqrt(A[j]));

            if (kc < kc_nn)
            {
                kc_nn = kc;

                soone = A[i];
                sotwo = A[j];
            }
        }
    }
        cout << "Khoảng cách gần nhất: " << soone <<" và " << sotwo;
    }
    else if (A.size() == 2)
    {
        cout << "Chỉ có 1 cặp";
    }
    else
    {
        cout << "Con cặc đụ mẹ mày một số sao so sánh";
    }

    return 0;
}