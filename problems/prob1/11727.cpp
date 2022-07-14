#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n+1, 0);
    arr[1] = 1;
    arr[2] = 3;
    
    for(int i = 3; i <= n; i ++) {
        arr[i] = ((arr[i-1] + 2*arr[i-2]) % 10007);
    }

    cout << arr[n] << '\n';

    return 0;
}