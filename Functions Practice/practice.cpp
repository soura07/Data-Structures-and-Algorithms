//Write a Function to add 2 numbers
// #include<iostream>
// using namespace std;
// int addSum(int a,int b){
//     int Result = a+b;
//     return Result;
// }
// int main()
// {
//     int a;
//     cout <<"Enter the value of a: ";
//     cin >> a;

//     int b;
//     cout <<"Enter the value of b: ";
//     cin >> b;

//     int sum = addSum(a,b);
//     cout <<"Result is : "<<sum<< endl;
// }


//Write a function of Students & Grade Probles

// #include<iostream>
// using namespace std;
// int getGread(int marks){
//     if(marks>=90){
//         return 'A';
//     }
//     else if(marks >=80){
//         return 'B';
//     }
//     else if(marks >= 70){
//         return 'C';
//     }
//     else if(marks >= 60){
//         return 'D';
//     }
//     else {
//         return 'F';
//     }
// }
// int main()
// {
//     int marks;
//     cout <<"Enter your marks: ";
//     cin >> marks;

//    char number = getGread(marks);
//     cout <<"The gread is : "<<number;
// }


//Debug Q3


// #include <iostream>
// using namespace std;

// int main() {
//   // size of the triangle
//   int size = 5;
//   // loop to print the pattern
//   for (int i = 0; i < size; i++) {
//     // print column
//     for (int j = 0; j < i+1; j++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }


//Debug Q4
#include <iostream>
using namespace std;

int main() {
  // size of the pyramid
  int size; 
  cin>>size;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < i-1; j++) {
      cout << " ";
    }
    // print stars
    for (int k = 0; k < 2 * size - 1; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}