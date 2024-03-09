// To find the largest adjacent elements product using vectors

#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> inputArray) {
    if (inputArray.size() < 2) {
        return 0;
    }
    int maxProduct = inputArray[0] * inputArray[1];

    for (int i = 1; i < inputArray.size() - 1; i++) {
        int product = inputArray[i] * inputArray[i + 1];
        maxProduct = max(maxProduct, product);
    }

    return maxProduct;
}


int main() {
    vector<int> nums = {5, 1, 2, 3, 1, 4};
    int result = solution(nums);
    cout << "The maximum adjacent product is: " << result << endl;
    return 0;
}
