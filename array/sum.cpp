#include <iostream>

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int sum = 0;

    // Range-based for loop iterates through every element automatically
    for (int num : arr) {
        sum += num;
    }

    std::cout << "Sum of array elements: " << sum << std::endl;
    return 0;
}
