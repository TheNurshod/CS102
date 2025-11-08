 // #include <iostream>
 // using namespace std;
// void inputMatrix(int matrix[][100], int N, int M) {
//     cout << "Enter " << N * M << " elements for the " << N << "x" << M << " matrix:" << endl;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }
// int main() {
//     int N, M;
//     cout << "Enter matrix dimensions (N M): ";
//     cin >> N >> M;
//     int matrix[100][100];
//     inputMatrix(matrix, N, M);
//     cout << "\nMatrix entered:" << endl;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
//problem 2
//Problem 3

// const int MAX_SIZE = 100;
//
// void inputMatrix(int matrix[][MAX_SIZE], int N, int M) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
// }
//
// void displayMatrix(int matrix[][MAX_SIZE], int N, int M) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << matrix[i][j];
//         }
//         cout << endl;
//     }
// }
//
// int sumMatrix(int matrix[][MAX_SIZE], int N, int M) {
//     int total = 0;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             total += matrix[i][j];
//         }
//     }
//     return total;
// }
//
// int main() {
//     int N, M;
//     int matrix[MAX_SIZE][MAX_SIZE];
//
//     cin >> N >> M;
//     inputMatrix(matrix, N, M);
//
//     cout << "Matrix:" << endl;
//     displayMatrix(matrix, N, M);
//
//     cout << "Sum: " << sumMatrix(matrix, N, M) << endl;
//
//     return 0;
//}
//problem 4


// const int MAX_SIZE = 100;
//
// void findRowMax(int matrix[][MAX_SIZE], int N, int M) {
//     for (int i = 0; i < N; i++) {
//         int maxInRow = matrix[i][0];
//
//         for (int j = 1; j < M; j++) {
//             if (matrix[i][j] > maxInRow) {
//                 maxInRow = matrix[i][j];
//             }
//         }
//
//         cout << maxInRow << " ";
//     }
//     cout << endl;
// }
//
// int main() {
//     int N, M;
//     int matrix[MAX_SIZE][MAX_SIZE];
//
//     cin >> N >> M;
//
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//
//
//     findRowMax(matrix, N, M);
//
//     return 0;
//}
//problem 5
//
//
// const int MAX_SIZE = 100;
//
// void findColumnSum(int matrix[][MAX_SIZE], int N, int M) {
//     for (int j = 0; j < M; j++) {
//         int colSum = 0;
//
//         for (int i = 0; i < N; i++) {
//             colSum += matrix[i][j];
//         }
//
//         cout << colSum << " ";
//     }
//     cout << endl;
// }
// int main() {
//     int N, M;
//     int matrix[MAX_SIZE][MAX_SIZE];
//     cin >> N >> M;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//
//
//     findColumnSum(matrix, N, M);
//
//     return 0;
// }
//problem 6

// const int MAX_SIZE = 100;
//
// int diagonalSum(int matrix[][MAX_SIZE], int N) {
//     int sum = 0;
//
//     for (int i = 0; i < N; i++) {
//         sum += matrix[i][i];
//     }
//
//     return sum;
// }
//
// int main() {
//     int N;
//     int matrix[MAX_SIZE][MAX_SIZE];
//
//
//     cin >> N;
//
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//
//
//     int result = diagonalSum(matrix, N);
//     cout << result << endl;
//
//     return 0;
// }
//problem 7


// const int MAX_SIZE = 100;
// void transposeMatrix(int matrix[][MAX_SIZE], int M, int N) {
//
//     int transpose[MAX_SIZE][MAX_SIZE];
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//
// int main() {
//     int M, N;
//     int matrix[MAX_SIZE][MAX_SIZE];
//     cin >> M >> N;
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     transposeMatrix(matrix, M, N);
//     return 0;
// }
//Problem 8


// const int MAX_SIZE = 100;
//
// void addMatrices(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int result[][MAX_SIZE], int N, int M) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }
// }
//
// void displayMatrix(int matrix[][MAX_SIZE], int N, int M) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
//
// int main() {
//     int N, M;
//     int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
//
//
//     cout << "Size of matrices: ";
//     cin >> N >> M;
//
//
//     cout << "Matrix 1:" << endl;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix1[i][j];
//         }
//     }
//
//
//     cout << "Matrix 2:" << endl;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> matrix2[i][j];
//         }
//     }
//
//
//     addMatrices(matrix1, matrix2, result, N, M);
//
//
//     cout << "Output:" << endl;
//     displayMatrix(result, N, M);
//
//     return 0;
// }
//Problem 9
// const int MAX_SIZE = 100;
//
// void multiplyMatrices(int A[][MAX_SIZE], int B[][MAX_SIZE], int result[][MAX_SIZE], int N, int M, int P) {
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < P; j++) {
//             result[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < P; j++) {
//             for (int k = 0; k < M; k++) {
//                 result[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
// }
//
// void displayMatrix(int matrix[][MAX_SIZE], int N, int M) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int N, M, P;
//     int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
//     cin >> N >> M;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < M; j++) {
//             cin >> A[i][j];
//         }
//     }
//     cin >> M >> P;
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < P; j++) {
//             cin >> B[i][j];
//         }
//     }
//     multiplyMatrices(A, B, result, N, M, P);
//     displayMatrix(result, N, P);
//
//     return 0;
// }
//Problem 10
// const int MAX_SIZE = 100;
//
// void rotate90Clockwise(int matrix[][MAX_SIZE], int N) {
//
//     for (int i = 0; i < N; i++) {
//         for (int j = i + 1; j < N; j++) {
//
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         }
//     }
//
//
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N / 2; j++) {
//
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[i][N - 1 - j];
//             matrix[i][N - 1 - j] = temp;
//         }
//     }
// }
//
// void displayMatrix(int matrix[][MAX_SIZE], int N) {
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     int N;
//     int matrix[MAX_SIZE][MAX_SIZE];
//     cin >> N;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     rotate90Clockwise(matrix, N);
//     displayMatrix(matrix, N);
//
//     return 0;
// }
//Problem 11
//Problem 12
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//
//     vector<int> v(N);
//     int sum = 0;
//
//     for (int i = 0; i < N; i++) {
//         cin >> v[i];
//         sum += v[i];
//     }
//
//     cout << sum;
//
//     return 0;
// }
//Problem 13
//
// int main() {
//  int n;
//  cin >> n;
//  vector<int> v(n);
//
//  for(int i = 0; i < n; i++) {
//   cin >> v[i];
//  }
//
//  int mx = v[0];
//  for(int i = 0; i < n; i++) {
//   if(v[i] > mx) {
//    mx = v[i];
//   }
//  }
//
//  cout << mx;
//  return 0;
// }
//problem 14
#include <iostream>
#include <vector>
// using namespace std;
//
// int main() {
//  int n, x;
//  cin >> n;
//  vector<int> v(n);
//
//  for(int i = 0; i < n; i++) {
//   cin >> v[i];
//  }
//
//  cin >> x;
//
//  int count = 0;
//  for(int i = 0; i < n; i++) {
//   if(v[i] == x) {
//    count++;
//   }
//  }
//
//  cout << count;
//  return 0;
// }
//Problem 15


// int main() {
//  int n, x;
//  cin >> n;
//  vector<int> v(n);
//
//  for(int i = 0; i < n; i++) {
//   cin >> v[i];
//  }
//
//  cin >> x;
//
//  for(int i = 0; i < n; i++) {
//   if(v[i] != x) {
//    cout << v[i];
//   }
//  }
//
//  return 0;
// }
//problem 16
//
// int main() {
//  int n;
//  cin >> n;
//  vector<int> v(n);
//
//  for(int i = 0; i < n; i++) {
//   cin >> v[i];
//  }
//
//  for(int i = n - 1; i >= 0; i--) {
//   cout << v[i] << " ";
//  }
//
//  return 0;
// }
//problem 17

// int main() {
//  int n, x, k;
//  cin >> n;
//  vector<int> v(n);
//
//  for(int i = 0; i < n; i++) {
//   cin >> v[i];
//  }
//
//  cin >> x >> k;
//
//  v.insert(v.begin() + k, x);
//
//  for(int i = 0; i < v.size(); i++) {
//   cout << v[i] << " ";
//  }
//
//  return 0;
// }
//problem 18

// int main() {
//  int n;
//  cin >> n;
//  vector<int> v(n);
//
//  for(int i = 0; i < n; i++) {
//   cin >> v[i];
//  }
//
//  for(int i = 0; i < n; i++) {
//   if(i == 0 || v[i] != v[i-1]) {
//    cout << v[i];
//   }
//  }
//
//  return 0;
// }
// //Problem 19
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//
// int main() {
//  int n;
//  cin >> n;
//  vector<int> v(n);
//
//  for(int i = 0; i < n; i++) {
//   cin >> v[i];
//  }
//
//  sort(v.begin(), v.end());
//
//  for(int i = 0; i < n; i++) {
//   cout << v[i];
//  }
//
//  return 0;
// }
//Problem 20
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//
//     for(int i = 0; i < n; i++) {
//         cin >> v[i];
//     }
//
//     sort(v.begin(), v.end());
//
//     int largest = v[n-1];
//     int second_largest = v[0];
//
//     for(int i = n-2; i >= 0; i--) {
//         if(v[i] != largest) {
//             second_largest = v[i];
//             break;
//         }
//     }
//
//     cout << second_largest;
//     return 0;
// }