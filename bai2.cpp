#include <iostream>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    int pt;
    cout << "Nhap so phan tu co trong danh sach: ";
    cin >> pt;

    double* A = new double[pt];
    double* A_sqrt = new double[pt];
    vector<float> B;

    for (int i = 0; i < pt; i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> A[i];
        A_sqrt[i] = round(sqrt(A[i]) * 1000) / 1000;
    }

    for (int i = 0; i < pt; i++)
    {
        if (A_sqrt[i] * A_sqrt[i] == A[i])
        {
            B.push_back(A[i]);
        }
    }

    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << endl;
    }

    delete A;
    delete A_sqrt;
    return 0;
}