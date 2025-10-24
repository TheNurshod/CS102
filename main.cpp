#include <iostream>
using namespace std;

// int power(int x, int y) {
//     if (y == 0) return 1;
//     return x * power(x, y - 1);
// }
//
// int main() {
//     int x, y;
//     cout << "x: ";
//     cin >> x;
//     cout << "y: ";
//     cin >> y;
//     cout << x << "^" << y << " = " << power(x, y) << endl;
//     return 0;
// }

//Problem 2
// void reverse(int n) {
//     if (n == 0) return;
//     cout << n % 10;
//     reverse(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number  ";
//     cin >> n;
//     cout << "Reversed ";
//     reverse(n);
//     cout << endl;
//     return 0;
// }
//Problem 3

// bool Palindrome(int n, int reversed = 0) {
//     if (n == 0) return (reversed == 0);
//     reversed = reversed * 10 + n % 10;
//     return Palindrome(n / 10, reversed);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number  ";
//     cin >> n;
//     if (Palindrome(n))
//         cout << n << " is a palindrome" << endl;
//     else
//         cout << n << " is not a palindrome" << endl;
//     return 0;
// }
//Problem 4
// bool Prime(int n, int i = 2) {
//     if (n <= 2) return (n == 2);
//     if (n % i == 0) return false;
//     if (i * i > n) return true;
//     return Prime(n, i + 1);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number";
//     cin >> n;
//     if (Prime(n))
//         cout << n << " is prime" << endl;
//     else
//         cout << n << " is not prime" << endl;
//     return 0;
// }
//Problem 5
// int EvenDigits(int n) {
//     if (n == 0) return 0;
//     return (n % 10 % 2 == 0) + EvenDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number  ";
//     cin >> n;
//     cout << "Even digits " << EvenDigits(n) << endl;
//     return 0;
// }
//Problem 6
// int productDigits(int n) {
//     if (n == 0) return 1;
//     return (n % 10) * productDigits(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number  ";
//     cin >> n;
//     if (n == 0)
//         cout << "Product of digits= 0" << endl;
//     else
//         cout << "Product of digits= " << productDigits(n) << endl;
//     return 0;
// }
//Problem 7
// bool PowerTwo(int n) {
//     if (n <= 1) return n == 1;
//     return (n % 2 == 0) && PowerTwo(n / 2);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number ";
//     cin >> n;
//     if (PowerTwo(n))
//         cout << n << " is a power of two." << endl;
//     else
//         cout << n << " is not a power of two." << endl;
//     return 0;
// }
//Problem 8
// bool Increasing(int n) {
//     if (n < 10) return true;
//     return (n % 10 > (n / 10) % 10) && Increasing(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number ";
//     cin >> n;
//     if (Increasing(n))
//         cout << n << " is in increasing order" << endl;
//     else
//         cout << n << " is not in increasing order"<<endl;
//     return 0;
// }
//Problem 9

// int countZeros(int n) {
//     if (n == 0) return 1;
//     if (n < 10) return 0;
//     return (n % 10 == 0) + countZeros(n / 10);
// }
//
// int main() {
//     int n;
//     cout << "Enter a number  ";
//     cin >> n;
//     cout << "Zeros  " << countZeros(n) << endl;
//     return 0;
// }
// Problem 10
// int power(int x, int y) {
//     if (y == 0) return 1;
//     if (y % 2 == 0) {
//         int halfPower = power(x, y / 2);
//         return halfPower * halfPower;
//     } else {
//         return x * power(x, y - 1);
//     }
// }
//
// int main() {
//     int x, y;
//     cout << "x: ";
//     cin >> x;
//     cout << "y: ";
//     cin >> y;
//
//
//     cout << x << "^" << y << " = " << power(x, y) << endl;
//     return 0;
// }
