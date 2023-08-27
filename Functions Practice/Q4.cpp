// Write a function of Students & Grade Probles
#include<iostream>
using namespace std;
int coutNumber(int marks){
    // if(marks>=90){
    //    return 'A';
    // }
    // else if(marks>=80){
    //     return 'B';
    // }
    // else if(marks>=70){
    //     return 'C';
    // }
    // else if(marks>=60){
    //     return 'D';
    // }
    // else{
    //    return 'F';
    // }

    switch(marks/10){
        case 10: return 'A' ; break;
        case 9: return 'A' ; break;
        case 8: return 'B' ; break;
        case 7: return 'C' ; break;
        case 6: return 'D' ; break;
       default: return 'E';

    }
}
int main()
{
    // int marks;
    // cout <<"Enter the of marks: "<<endl;
    // cin >> marks;

    // char finalResult = coutNumber(marks);
    // cout << finalResult;
    for(int i =0;i<100;i++){
        char ans = coutNumber(i);
        cout <<"Gread for marks = "<<i<<" is " << ans<<endl;

    }
    return 0;
        

}