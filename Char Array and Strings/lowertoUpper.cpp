//Convert into upper case 
// #include<bits/stdc++.h>
// using namespace std;
// void convertUppercase(char arr[]){
//     int n = strlen(arr);
//     for(int i=0;i<n;i++)
//     {
//         arr[i] = arr[i] - 'a'+'A';
//     }
// }
// int main()
// {
//     char arr[100]="souradeep";
//     convertUppercase(arr);
//     cout <<"After uppercase ---> " << arr<<endl;
// }

//convert in lowercase
#include<bits/stdc++.h>
using namespace std;
void convertLower(char arr[]){
    int n = strlen(arr);
    for(int i = 0; i<n; i++)
    {
        arr[i] = arr[i] + 'a' - 'A';
    }
}
int main()
{
    char arr[100]="SOURADEEP";
    convertLower(arr);
    cout<<"After lower case convert--> "<<arr<<endl;
}