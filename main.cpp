#include <iostream>
using namespace std;
//
// void cyclicSwap(int *ptrA, int *ptrB, int *ptrC) {
//     int temp = *ptrC;
//     *ptrC = *ptrB;
//     *ptrB = *ptrA;
//     *ptrA = temp;
// }
//
// int main() {
//     int a = 3, b = 7, c = 10;
//
//     cout << "Before " <<"a =  "  << a << ", b = " << b << ", c = " << c << endl;
//
//     cyclicSwap(&a, &b, &c);
//
//     cout << "After   " <<" a =  " << a << ", b = " << b << ", c = " << c << endl;
//
//     return 0;
// }
//Problem 2
// int cmpAsc(int* a, int* b) {
//     return *a - *b;
// }
// int cmpDesc(int* a, int* b) {
//     return *b - *a;
// }
// void sortWithComparator(int* arr, int n, int (*cmp)(int*, int*)) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (cmp(&arr[j], &arr[j + 1]) > 0) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
//
// void printArray(int* arr, int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
//
// int main() {
//     int arr[] = {5, 2, 9, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "before ";
//     printArray(arr, n);
//
//     int arrDesc[n];
//     for (int i = 0; i < n; i++) {
//         arrDesc[i] = arr[i];
//     }
//
//     sortWithComparator(arr, n, cmpAsc);
//     cout << "Ascending order= ";
//     printArray(arr, n);
//
//     sortWithComparator(arrDesc, n, cmpDesc);
//     cout << "Descending order= ";
//     printArray(arrDesc, n);
//
//     return 0;
// }
//problem 4
// int sumKth(int* arr, int n, int k) {
//     int sum = 0;
//     for (int* ptr = arr; ptr < arr + n; ptr += k) {
//         sum += *ptr;
//     }
//     return sum;
// }
//
// int main() {
//     int arr[] = {4, 1, 7, 3, 9};
//     int n = 5;
//     int k = 2;
//
//     cout << "Array = ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     int result = sumKth(arr, n, k);
//     cout << "Sum of k-th element: " << result << endl;
//
//     return 0;
// }
//problem 5
// int main() {
//     int arr[5] = {1, 4, 6, 9};
//     int value = 5;
//     int n = 4;
//     cout << "Before   ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     int* p = arr;
//     while(p < arr + n && *p < value) {
//         p++;
//     }
//     for(int* end = arr + n; end > p; end--) {
//         *end = *(end - 1);
//     }
//     *p = value;
//     n++;
//     cout << "After  ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }
//problem 6
// int main() {
//     int arr[] = {2, 3, 5, 1, 4};
//     int target = 6;
//     int n = 5;
//     int* start = arr;
//     int* end = arr;
//     int sum = 0;
//     while(end < arr + n) {
//         sum += *end;
//         while(sum > target) {
//             sum -= *start;
//             start++;
//         }
//         if(sum == target) {
//             cout << "Found: ";
//             int* p = start;
//             while(p <= end) {
//                 cout << *p << " ";
//                 p++;
//             }
//             cout << endl;
//             return 0;
//         }
//         end++;
//     }
//     cout << "Not found" << endl;
//     return 0;
// }
//Problem 7
