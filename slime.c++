// Your First C++ Program

#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}


// for (i = 0; i < n; i++) {
//  for (j = 1, sum = a[0]; j <= i; j++)
//  sum += a[j];
//  cout<<”sum for subarray 0 through “<< i <<” is “<<sum<<end1;
// }


template<class T> // overloaded operator < is used;
int binarySearch(const T arr[], int arrSize, const T& key) {
 int lo = 0, mid, hi = arrSize-1;
 while (lo <= hi) {
 mid = (lo + hi)/2;
 if (key < arr[mid])
 hi = mid - 1;
 else if (arr[mid] < key)
 lo = mid + 1;
 else return mid; // success: return the index of
 }  // the cell occupied by key;
 return -1; // failure: key is not in the array;
}
