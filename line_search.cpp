#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 0, 50, 123, 456, 8694, 1, 23, 7, 90, 5 };
    int p;
    cin >> p;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (p == arr[i]) {
            cout << i+1;
        }
    }
}
