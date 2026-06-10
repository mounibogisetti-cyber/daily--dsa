## Performance Analysis: Array Summation

The following analysis applies to iterative approaches (loops) for calculating the sum of elements in an array.

### 1. Time Complexity
- **Worst Case:** `O(n)`
- **Average Case:** `O(n)`
- **Best Case:** `O(n)`
  - **Reasoning:** To compute the sum, every element in the array of size `n` must be visited exactly once.

### 2. Space Complexity
- **Iterative Approach:** `O(1)` (Constant Space)
  - **Reasoning:** Only a single variable (`sum`) is used to accumulate the total, regardless of input size.
- **Recursive Approach:** `O(n)`
  - **Reasoning:** Each recursive call is added to the system call stack until the base case is reached, requiring space proportional to the array size.
