#include <iostream>
#include <vector>

void mergeTwoSortedArraysWithoutExtraSpace(std::vector<long long> &a, std::vector<long long> &b) {
    std::vector<long long> arr;
    
    long long m = a.size();
    long long n = b.size();
    long long i = 0;
    long long j = 0;

    // Merge the two sorted arrays
    while (i < m && j < n) {
        if (a[i] < b[j]) {
            arr.push_back(a[i]);
            i++;
        } else {
            arr.push_back(b[j]);
            j++;
        }
    }

    // Copy the remaining elements from array 'a'
    while (i < m) {
        arr.push_back(a[i]);
        i++;
    }

    // Copy the remaining elements from array 'b'
    while (j < n) {
        arr.push_back(b[j]);
        j++;
    }

    // Copy the merged elements back to array 'a'
    for (int i = 0; i < m; i++) {
        a[i] = arr[i];
    }

    // Copy the merged elements back to array 'b'
    for (int i = 0; i < n; i++) {  
        b[i] = arr[i + m];
    }
}
