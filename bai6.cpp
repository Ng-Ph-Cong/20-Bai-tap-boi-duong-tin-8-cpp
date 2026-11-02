#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int pt;
    cout << "Nhap so phan tu co trong danh sach: ";
    cin >> pt;

    vector<float> A(pt);
    int x;
    cout << "Nhap x: ";
    cin >> x;
    
    for (int i = 0; i < A.size(); i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> A[i];
    }

    auto vtr = find(A.begin(), A.end(), x);
    
    if (vtr != A.end())
    {
        int vitri = distance(A.begin(), vtr);
        cout << "Vi tri " << vitri + 1;
    }
    else
    {
        cout << "Ko tim thay";
    }

    return 0;
}