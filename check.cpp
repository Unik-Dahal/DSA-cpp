#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int lasttwo = (n % 100);
    int firstwo;

    int n1 = 0, n2;
    while (n > 0)
    {
        int remainder = n % 10;
        n2 = n1;
        n1 = remainder;
        n = n / 10;
    }
    firstwo = n1 * 10 + n2;

    int multiple = firstwo * lasttwo;

    return 0;
}