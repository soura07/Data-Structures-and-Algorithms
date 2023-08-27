// // Hollow Pattern
// // * * * * * ---> row0--5 *
// // *       * --> row1 -- 1* 3space 1*
// // * * * * * --> same as row0 5*

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int row =0; row<3; row++)
//     {
//         if(row == 0 || row == 2)
//         {
//             for(int col=0;col<5;col++)
//             {
//                 cout << "* ";
//             }

//         }
//         else 
//         {
//             cout << "* ";
//             for(int i=0;i<3;i++)
//             {
//                 cout << "  ";
//             }
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int rowCount,colCount;
    cin >> rowCount;
    cin >> colCount;
    for(int row=0;row<rowCount;row++)
    {
        if(row == 0 || row == rowCount-1)
        {
            for(int col=0;col < colCount;col++)
            {
                cout << "* ";
            }

        }
        else
        {
            cout << "* ";
            for(int i=0;i<colCount-2;i++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}






