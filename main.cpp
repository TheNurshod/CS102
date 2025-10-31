 #include <iostream>
 using namespace std;
// Problem 6
// int main() {
//     char ch;
//     int freq[26] = {0};
//     cout << "Enter characters =";
//
//     while (true) {
//         cin >> ch;
//
//         if (ch == '0')
//             break;
//
//         if (ch >= 'a' && ch <= 'z') {
//             freq[ch - 'a']++;
//         }
//     }
//
//     cout << "\nNumbers of lowercase letters\n";
//     for (int i = 0; i < 26; i++) {
//         if (freq[i] > 0)
//             cout << char('a' + i) << " : " << freq[i] << endl;
//     }
//
//     return 0;
// }
//Problem 7
//
// int main() {
//     int n;
//
//     cout << "Enter n= ";
//     cin >> n;
//
//     int arr[100];
//
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] > arr[j]) {
//
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//
//     cout << "Sorted: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//
//     return 0;
// }
//Problem 8

// int main() {
//     int results[7] = {0};
//
//     for (int i = 0; i < 10000; i++) {
//         results[rand() % 6 + 1]++;
//     }
//
//     for (int i = 1; i <= 6; i++) {
//         cout << results[i] << " ";
//     }
//
//     return 0;
// }
//Problem 9

// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int n;
//
//     cout << "Enter number of elements: ";
//     cin >> n;
//
//     int arr[100];
//
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     cout << "Original: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//
//     reverseArray(arr, 0, n - 1);
//
//     cout << "\nReversed: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//
//     return 0;
// }
//Problem 10
//
// int main() {
//     int n;
//
//     cout << "Enter n= ";
//     cin >> n;
//
//     int arr[100];
//
//     cout << "Enter " << n << " numbers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//
//     bool sorted = true;
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             sorted = false;
//             break;
//         }
//     }
//
//     if (sorted) {
//         cout << "YES";
//     } else {
//         cout << "NO";
//     }
//
//     return 0;
// }
