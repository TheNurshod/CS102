#include <iostream>
using namespace std;
//PROBLEM 12

// int main() {
//   int a, b, c;
//   cout << "Please enter a,b, c angles" << endl;
//   cin >> a >> b >> c;
//   if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
//   cout << "Valid triangle " << endl;
// } else {
//   cout << "Error, sum is not 180 ." << endl;
// }
//
// return 0;
//}

//PROBLEM 14

// int main() {
//     char ch;
//
//     cout << "Enter a character ";
//     cin >> ch;
//
//     if (ch >= 'a' && ch <= 'z') {
//         cout << "Lowercase letter" << endl;
//     }
//     else if (ch >= 'A' && ch <= 'Z') {
//         cout << "Uppercase letter" << endl;
//     }
//     else {
//         cout << "Not from alphabet" << endl;
//     }
//
//     return 0;
// }

//  PROBLEM 15

// int main() {
//     double weight1, price1, weight2, price2;
//
//     cout << "Enter weight and price for package 1 ";
//     cin >> weight1 >> price1;
//
//     cout << "Enter weight and price for package 2 ";
//     cin >> weight2 >> price2;
//
//     double cost1 = price1 / weight1;
//     double cost2 = price2 / weight2;
//
//
//     if (cost1 < cost2) {
//         cout << "Package 1 is better " << endl;
//     } else if (cost2 < cost1) {
//         cout << "Package 2 is better " << endl;
//     } else {
//         cout << "the same price given " << endl;
//     }
//
//     return 0;
// }

//PROBLEM 16

// int main() {
//     int a;
//
//     cout << "Enter a 3 digit number= ";
//     cin >> a;
//
//     if ( (a/100)==(a%10)) {
//         cout << "The number is a palindrome." << endl;
//     } else {
//         cout << "The number is not a palindrome." << endl;
//     }
//
//     return 0;
// }

//PROBLEM 19



// int main() {
//     int today, days, future;
//
//     cout << "Enter today's day : ";
//     cin >> today;
//
//     cout << "Enter number of days elapsed since today: ";
//     cin >> days;
//
//     future = (today + days) % 7;
//
//
//     if (today == 0) cout << "Today is Sunday";
//     if (today == 1) cout << "Today is Monday";
//     if (today == 2) cout << "Today is Tuesday";
//     if (today == 3) cout << "Today is Wednesday";
//     if (today == 4) cout << "Today is Thursday";
//     if (today == 5) cout << "Today is Friday";
//     if (today == 6) cout << "Today is Saturday";
//
//
//     if (future == 0) cout << " and the future day is Sunday";
//     if (future == 1) cout << " and the future day is Monday";
//     if (future == 2) cout << " and the future day is Tuesday";
//     if (future == 3) cout << " and the future day is Wednesday";
//     if (future == 4) cout << " and the future day is Thursday";
//     if (future == 5) cout << " and the future day is Friday";
//   if(future == 6) cout << " and the future day is Saturday";
//
//     return 0;
// }

//PROBLEM 18

// int main() {
//     double x, y;
//
//     cout << "Enter a point (x, y): ";
//     cin >> x >> y;
//
//
//     if (x * x + y * y <= 100) {
//         cout << "Point (" << x << ", " << y << ") is inside the circle" << endl;
//     } else {
//         cout << "Point (" << x << ", " << y << ") is outside the circle" << endl;
//     }
//
//     return 0;
// }

// PROBLEM 17

// int main() {
//     char language;
//
//     cout << "Choose language (u, e, r, g): ";
//     cin >> language;
//
//     if (language == 'u' ) {
//         cout << "Salom" << endl;
//     }
//     else if (language == 'e') {
//         cout << "Hello" << endl;
//     }
//     else if (language == 'r' ) {
//         cout << "Privet" << endl;
//     }
//     else if (language == 'g') {
//         cout << "Hallo" << endl;
//     }
//     else {
//         cout << "invalid character pressed " << endl;
//     }
//     return 0;
// }

//PROBLEM 20

// int main() {
//     double gpa;
//
//     cout << "Enter GPA: ";
//     cin >> gpa;
//
//     if (gpa >= 4.0) {
//         cout << "You got 80% scholarship" << endl;
//     }
//     else if (gpa >= 3.5) {
//         cout << "You got 60% scholarship" << endl;
//     }
//     else if (gpa >= 3.0) {
//         cout << "You got 50% scholarship" << endl;
//     }
//     else {
//         cout << "No scholarship" << endl;
//     }
//     return 0;
// }

//PROBLEM 21

// int main() {
//     int month;
//
//     cout << "Enter month number of month : ";
//     cin >> month;
//
//     if (month == 1) {
//         cout << "In January there is:\n- New Year's Day, 1 January" << endl;
//     }
//     else if (month == 3) {
//         cout << "In March there is:\n- International Women's Day, 8 March\n- Navruz, 21 March" << endl;
//     }
//     else if (month == 5) {
//         cout << "In May there is:\n- Memorial Day, 9 May" << endl;
//     }
//     else if (month == 9) {
//         cout << "In September there is:\n- Independence Day, 1 September" << endl;
//     }
//     else if (month == 10) {
//         cout << "In October there is:\n- Teacher's Day, 1 October" << endl;
//     }
//     else if (month == 12) {
//         cout << "In December there is:\n- Constitution Day, 8 December" << endl;
//     }
//     else {
//         cout << "In ";
//         if (month == 2) cout << "February";
//         else if (month == 4) cout << "April";
//         else if (month == 6) cout << "June";
//         else if (month == 7) cout << "July";
//         else if (month == 8) cout << "August";
//         else if (month == 11) cout << "November";
//         cout << " there is no holidays. " << endl;
//     }
//
//     return 0;
// }

//PROBLEM 13

// #include <cmath>
// int main() {
//     double a, b, c;
//     double discriminant, x1, x2;
//
//     cout << "Enter coefficient (a, b, c): ";
//     cin >> a >> b >> c;
//
//
//     discriminant = b * b - 4 * a * c;
//
//     if (discriminant > 0) {
//
//         x1 = (-b + sqrt(discriminant)) / (2 * a);
//         x2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "two real solutions: ";
//         cout << "x1 = " << x1 << endl;
//         cout << "x2 = " << x2 << endl;
//     }
//     else if (discriminant == 0) {
//
//         x1 = -b / (2 * a);
//         cout << "one real solution ";
//         cout << "x = " << x1 << endl;
//     }
//     else { cout << "No solution" << endl; }
//     return 0;
//     }

