
#include<bits/stdc++.h>
using namespace std;
//hello print
// void hello( int n) {
//     if (n<=0){
//     return;
// }
//     hello(n-1);
//     cout<<(n)<<endl;
// }
// int main() {
//     int i = 10;
//     hello(i);
//     return 0;
// }

//factorial of a given number
// int fact(int n) {
//     if ( n ==1) {
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main() {
//     int n =5;
//     cout<<fact(n);
//     return 0;
// }

//reverse an arr
// int rev(int arr[], int n){
//     if ( n<0) {
//         return 0;
//     }
//     for ( int j = 0;j<n;j++) {
//         swap(arr[j], arr[n-1]);
//     }
//     rev(arr, n-1);
//     return 0;
// }
// int main() {
//     int n = 5;
//     int arr[n];
//     for ( int i = 0; i<n; i++) {
//         cin>>arr[i];
//     }
//     for ( int i = 0; i<n; i++) {
//         cout<<"the given array is"<<arr[i]<<endl;
//     }
//     rev(arr, n);
//     for ( int i = 0; i<n; i++) {
//         cout<<"the reversed array is"<<arr[i]<<endl;
//     }
//
//     return 0;
// }
// int sum( int &c, int d) {
//     c = c+2;
//     return c+ d;
// }
// int square(int x) {
//     return x*x;
// }
// int square2( int a, int b) {
//     return square(a)+square(b);
// }
// int main() {
//     int n = 3;
//     int d = 2;
//     cout<<sum(n,d)<<endl;
//     cout<<n;
//     //cout<<square2(n,d)<<endl;
//     return 0;
// }

//int sumarr( vector<int> &v) {
  //  int sum = 0;
//for (auto i: v) {
  //  if ( i%2 == 0) {
    //    sum += i ;
    //}
//}
  //  return sum;
//}

// int main() {
//     map<string, int> student_marks = {
//         {"Abhay", 0},
//         {"Aayush", 100},
//         {"Jaanu", 95},
//     };
    // int marks = student_marks["Aayush"];
    // cout<<marks<<endl;
    // string student;
    // cin>>student;
    // int mark;
    // cin>>mark;
    // student_marks[student] = mark;
    // int stu = student_marks[student];
    // cout<<stu<<endl;
//     for (const auto [key, value] : student_marks) {
//         cout<<key<<": "<<value<<endl;
//     }
//     return 0;
// }

int main() {
  vector<int> repeated_numbers = {0,1,2,3,2,5,4,6,3,7,5,8,5,2,6,9,4,3,6,7,3,5,7,8,5,7,3,6,8,8,5,6,3,6,7,4,5};
  // int count = 0;
  // for ( auto i: repeated_numbers) {
  //   for ( auto j: repeated_numbers) {
  //     if ( i == j) {
  //       count++;
  //     }
  //   }
  //   cout<<i<<": "<<count<<endl;
  //   count = 0;
    unordered_map< int, int> freq;
    for ( auto i: repeated_numbers) {
      if ( freq.find(i) == freq.end()){
      freq[i] = 1;
    }
      else {
        freq[i] += 1;
      }
  }
  for ( const auto& [key,value] : freq) {
    cout<<key<< ": "<<value<<endl;
  }
}


