// // Practice Sheet

// //1st Pattern

// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     for(int row=0;row<3;row++)
// //     {
// //         for(int col=0;col<4;col++)
// //         {
// //             cout << " *";
// //         }
// //         cout<< endl;
// //     }
// // }

// //2nd Pattern

// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cout<<"Enter your number: ";
// //     cin >> n;
// //     for(int row=0; row<n;row++)
// //     {
// //         for(int col=0;col<n;col++)
// //         {
// //             cout<<"* ";
// //         }
// //         cout << endl;
// //     }
// // }


// //3rd Pattern

// //Hollow Rectangle
// // * * * * *
// // *       *
// // * * * * *

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row=0;row<3;row++)
//     {
//         if(row==0 || row ==2)
//         {
//             for(int i=0;i<5;i++)
//             {
//                 cout << "* ";
//             }
//         }
//         else{
//             cout << "* ";
//             for(int j=0;j<3;j++)
//             {
//                 cout<< "  ";
//             }
//             cout << "* ";

//         }
//         cout << endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<row+1;col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

// }

// {
//     int n;
//     cin >> n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<n-row;col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<row+1;
            if(col != row)
            {
                cout <<"*";
            }
        }
        cout << endl;
    }
   for(int row=0;row<n;row++)
   {
         for(int col=0;col<n-row;col++)
         {
            cout << n-row;
            if(col != n-row-1)
            {
                cout <<"*";
            }
         }
         cout << endl;
   }
}