// calculate_sum_errors.cpp
// Errors: missing semicolon, unclosed function body

#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total   // error: expected ';'
  
int main() {                          // error: previous function not closed
    int nums[] = {1,2,3,4,5};
    int result = calculateSum(nums,5);
    cout << result << endl;
    return 0;
}
