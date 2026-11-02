#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int pt;
    cout << "Nhap so phan tu co trong ds: ";
    cin >> pt;

    vector<int> A(pt);
    vector<double> B;

    for (int i = 0; i < pt; i ++)
    {
        cout << "Nhap phan tu thu " << i +1 << ": ";
        cin >> A[i];

        B.push_back(round(sqrt(A[i]) * 1000) / 1000);
    }

    for (int i = 0; i < B.size(); i++)
    {
        cout << B[i] << endl;
    }

    return 0;
}
