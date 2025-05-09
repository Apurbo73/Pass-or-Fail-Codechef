#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c;
        d = b * 3;
        e = (a - b) * (-1);
        int x = e + d;
        if (x >= c)
        {
            cout << "PASS" << endl;
        }
        else
        {
            cout << "FAIL" << endl;
        }
    }
}