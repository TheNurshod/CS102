// #include <iostream>
// using namespace std;
// int findMax(int*arr, int size) {
//     int max = *arr;
//     for (int i = 0; i < size; i++) {
//         if (*(arr + i) > max) {
//             max = *(arr + i);
//
//         }
//     }
//     return max;
// }
// int main() {
//     int n ;
//     cout << "Enter number of people ";
//     cin >> n;
//     int heights[n];
//     cout<<"Enter height of people "<<n<<"people";
//     for (int i = 0; i < n; i++) {
//         cin >> heights[i];
//     }
//     cout<<"max height"<<findMax(heights, n )<<endl;
//     return 0;
// }
//problem 2
// int main() {
//     int a , b ;
//     cout<<"enter a =";
//     cin>>a;
//     cout<<"enter b =";
//     cin>>b;
//     int *ptrA=&a;
//     int *ptrB=&b;
//     cout<<"VALUE a="<<*ptrA<<endl;
//     cout<<"VALUE b"<<*ptrB<<endl;
//     return 0;
// }
//Problem 3
// int main() {
//     int n;
//     cout<<"enter n ";
//     cin>>n;
//     int a[n];
//     cout<<"ENTER"<<n<<"values";
//     for(int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     int*maxPtr=a;
//     for(int i=1;i<n;i++) {
//         if (a[i]>*maxPtr) {
//             *maxPtr=a[i];
//         }
//     }
//     cout<<"Pointers to max"<<*maxPtr<<endl;
//     cout<<"address"<<maxPtr<<endl;
// }
//Problem 5
// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main() {
//     strand(time(0));
//
}
//problem 6
#include <iostream>
using namespace std;
// int main() {
//     int n;
//     cout<<"Enter n ";
//     cin>>n;
//     int*ptr=&n;
//     cout<<"the message is" <<*ptr<<endl;
//     return 0;
// }
//problem 8
// int main() {
//     int n;
//     cout << "Enter n ";
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int*ptr=a;
//     ptr=ptr+(n-1);
//     cout<<"the last one is "<<*ptr<<endl;
//     return 0;
// }
// problem 9
// int main() {
//     int score;
//     cout<<"enter students score: ";
//     cin>>score;
//     int*ptr=&score;
//     cout<<"student score = "<<*ptr<<endl;
//     *ptr+=10;
//     cout<<"student score = "<<*ptr<<endl;
//     return 0;
// }
//Problem 10


}