#Second and third largest number in array
## Student Information

**Name**: Esubalew Kifle
**Student ID**: TRNS-0056/24
**Course**: Data Structure and Algorithm

## Algorithm

### findSecondLargest Function

**Input:** An array `arr` of integers and its size `size`.

**Edge Case Handling:**

*   If the array size is less than 2 (`size < 2`), print the message "Array too small" to the console, and return `INT_MIN` (defined in `<limits.h>`). This indicates that a second largest element cannot be found.

**Algorithm Steps:**

1.  Initialize two variables, `first` and `second`, both to `INT_MIN`.  `first` will store the largest element, and `second` will store the second largest.
2.  Iterate through the array from index 0 to `size - 1`.
3.  For each element `arr[i]`:
    *   If `arr[i]` is greater than `first`:
        *   Update `second` to the current value of `first`.
        *   Update `first` to `arr[i]`.
    *   Otherwise, if `arr[i]` is greater than `second` AND `arr[i]` is not equal to `first`:
        *   Update `second` to `arr[i]`.
4.  After the loop, if `second` remains `INT_MIN`, print the message "No second largest element exists" to the console, and return `INT_MIN`.  This indicates that there is no distinct second largest element (e.g., all elements are the same).
5.  Return the value of `second`.

### findThirdLargest Function

**Input:** An array `arr` of integers and its size `size`.

**Edge Case Handling:**

*   If the array size is less than 3 (`size < 3`), print the message "Array too small" to the console, and return `INT_MIN` (defined in `<limits.h>`).  This indicates that a third largest element cannot be found.

**Algorithm Steps:**

1.  Initialize three variables, `first`, `second`, and `third`, all to `INT_MIN`. `first` will store the largest element, `second` will store the second largest, and `third` will store the third largest.
2.  Iterate through the array from index 0 to `size - 1`.
3.  For each element `arr[i]`:
    *   If `arr[i]` is greater than `first`:
        *   Update `third` to the current value of `second`.
        *   Update `second` to the current value of `first`.
        *   Update `first` to `arr[i]`.
    *   Otherwise, if `arr[i]` is greater than `second` AND `arr[i]` is not equal to `first`:
        *   Update `third` to the current value of `second`.
        *   Update `second` to `arr[i]`.
    *   Otherwise, if `arr[i]` is greater than `third` AND `arr[i]` is not equal to `second` AND `arr[i]` is not equal to `first`:
        *   Update `third` to `arr[i]`.
4.  After the loop, if `third` remains `INT_MIN`, print the message "No third largest element exists" to the console, and return `INT_MIN`. This indicates that there is no distinct third largest element.
5.  Return the value of `third`.

