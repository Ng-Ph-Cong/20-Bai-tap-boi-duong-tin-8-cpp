#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int pt;
    cout << "Nhap pt = ";
    cin >> pt;

    vector<float> A(pt);
    vector<double> B(pt);
    int x;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhap phan tu thu " << i +1 << ": ";
        cin >> A[i];
    }

    cout << "nhap x = ";
    cin >> x;
    for (int i = 0; i < A.size(); i++)
    {
        B[i] = abs(A[i] - x);
    }

    double gan_nhat = A[0];
    for (int i = 0; i < B.size(); i++)
    {
        if (B[i] < gan_nhat)
        {
            gan_nhat = B[i];
        }
    }

    auto VTR = find(B.begin(), B.end(), gan_nhat);
    if (VTR != B.end())
    {
        int vitri = distance(B.begin(), VTR);
        cout << "Gan nhat: " << A[vitri];
    }
    else
    {
        cout << "Ko tim thay";
    }

    return 0;
}