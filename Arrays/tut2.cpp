#include <bits/stdc++.h>
using namespace std;

int searcharray(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "Enter the key" << endl;
    cin >> key;

    cout << searcharray(array, n, key);

    return 0;
}