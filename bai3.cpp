#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int pt;
    cout << "Nhap so phan tu co trong danh sach: ";
    cin >> pt;

    vector<int> A(pt);
    double kq = 0;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> A[i];

        kq += round( sqrt(A[i]) * 1000 ) / 1000;
    }

    cout << kq;

    return 0;
}