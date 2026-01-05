#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int lsum = 0, rsum = 0;
        for (int j = 0; j < i; j++)
            lsum += arr[j];
        for (int j = i + 1; j < n; j++)
            rsum += arr[j];

        if (lsum == rsum) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}

