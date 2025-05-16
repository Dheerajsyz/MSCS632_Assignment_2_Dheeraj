#include <iostream>
using namespace std;

int main() {
    int* arr = new int[1'000'000];
    long long sum = 0;
    for (int i = 0; i < 1'000'000; ++i) {
        arr[i] = i;
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    delete[] arr;
    return 0;
}
