#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int pt;
    cout << "Nhap so phan tu co trong danh sach: ";
    cin >> pt;

    vector<float> A(pt);
    vector<double> A_sqrt(pt);
    int kq = 0;
    int x;


    for (int i = 0; i < A.size(); i ++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> A[i];

        A_sqrt[i] = round(sqrt(A[i]) * 1000) / 1000; 
    }

    cout << "Nhap x: ";
    cin >> x;

    for (int i = 0; i < A.size(); i++)
    {
        if (A_sqrt[i] >= x)
        {
            kq += 1;
        }
    }

    cout << kq;

    return 0;
}