//problem1
// #include <iostream>
 // using namespace std;

// double total(double price, int quantity) {
//     return price * quantity;
// }
//
// int main() {
//     int choice, quantity;
//     double bill = 0;
//     char again;
//
//     do {
//         cout << "\n MENU \n";
//         cout << "1.osh - 30\n";
//         cout << "2. burger - 50 \n";
//         cout << "3. cola - 15\n";
//
//         cout << "Choose (1-3) ";
//         cin >> choice;
//
//         cout << "Enter quantity ";
//         cin >> quantity;
//
//         switch (choice) {
//             case 1:
//                 bill += total(30, quantity);
//                 break;
//             case 2:
//                 bill += total(50, quantity);
//                 break;
//             case 3:
//                 bill += total(15, quantity);
//                 break;
//             default:
//                 cout << "(Invalid)";
//                 continue;
//         }
//
//         cout << "Do you want  more?(yes or no): ";
//         cin >> again;
//
//     } while (again == 'y' || again == 'Y');
//
//     cout << "\nTotal Bill = " << bill << endl;
//
//
//     return 0;
// }

//Problem 5

// #include <iostream>
// using namespace std;
//
//
// void showBalance(double balance);
// double deposit(double balance);
// double withdraw(double balance);
//
// int main() {
//     double balance = 500.0;
//     int choice;
//
//     do {
//         cout << "\n Simple Bank Menu \n";
//         cout << "1. Check \n";
//         cout << "2. Deposit \n";
//         cout << "3. Withdraw \n";
//         cout << "4. Exit\n";
//         cout << "Choose 1-4: ";
//         cin >> choice;
//
//         switch (choice) {
//             case 1:
//                 showBalance(balance);
//                 break;
//             case 2:
//                 balance = deposit(balance);
//                 break;
//             case 3:
//                 balance = withdraw(balance);
//                 break;
//             case 4:
//                 cout << "thank you!\n";
//                 break;
//             default:
//                 cout << "Invalid!\n";
//         }
//     } while (choice != 4);
//
//     return 0;
// }
//
// void showBalance(double balance) {
//     cout << "balance is" << balance << endl;
// }
//
// double deposit(double balance) {
//     double amount;
//     cout << "how much you want to deposit  ";
//     cin >> amount;
//
//     if (amount > 0) {
//         balance += amount;
//         cout << " New balance= " << balance << endl;
//     } else {
//         cout << "invalid!\n";
//     }
//     return balance;
// }
//
// double withdraw(double balance) {
//     double amount;
//     cout << "how much you want to withdraw: $";
//     cin >> amount;
//
//     if (amount <= 0) {
//         cout << "Withdrawal amount must be positive!\n";
//     } else if (amount > balance) {
//         cout << "not enough \n";
//     } else {
//         balance -= amount;
//         cout << "new balance=" << balance << endl;
//     }
//     return balance;
// }

// problem 6

// #include <iostream>
// using namespace std;
//
//
// double total(double price, int quantity) {
//  return price * quantity;
// }
//
// int main() {
//  int choice, quantity;
//  double bill = 0;
//  char again;
//
//  do {
//   cout << "\n MOVIES \n";
//   cout << "1.MOVIE A  - 8\n";
//   cout << "2. MOVIE B- 10\n";
//   cout << "3. MOVIE C  - 12\n";
//
//   cout << "Choose 1-3: ";
//   cin >> choice;
//
//   cout << "Enter quantity: ";
//   cin >> quantity;
//
//   switch (choice) {
//    case 1:
//     bill += total(8, quantity);
//     break;
//    case 2:
//     bill += total(10, quantity);
//     break;
//    case 3:
//     bill += total(12, quantity);
//     break;
//    default:
//     cout << "Invalid choice!\n";
//     continue;
//   }
//
//   cout << "more movies ? (yes or no): ";
//   cin >> again;
//
//  } while (again == 'y' || again == 'Y');
//
//  cout << "\nTotal Bill = " << bill << endl;
//
//
//  return 0;
// }