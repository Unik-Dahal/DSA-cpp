#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int smallest = array[0];
    int largest = array[0];
    for (int i = 0; i < n; i++)
    {

        if (largest < array[i])
        {
            largest = array[i];
        }
        else if (smallest > array[i])
        {
            smallest = array[i];
        }
    }

    cout << "The largest number in array is " << largest << endl;
    cout << "The smallest number in array is " << smallest << endl;
}