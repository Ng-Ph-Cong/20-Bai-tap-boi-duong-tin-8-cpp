#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int pt;
    cout << "Nhap pt: ";
    cin >> pt;

    vector<float> A(pt);
    vector<double> B(pt);
    float x;

    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> A[i];

        B[i] = round(sqrt(A[i]) * 1000) / 1000;
    }

    cout << "Nhap x = ";
    cin >> x;

    auto VTR = find(B.begin(), B.end(), x);
    if (VTR != B.end())
    {
        int vitri = distance(B.begin(), VTR);
        cout << "Vi tri " << vitri + 1<< endl;
    }
    else
    {
        cout << "kong tim thay" << endl;
    }

    return 0;
}