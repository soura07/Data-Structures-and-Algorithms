#include<bits/stdc++.h>
using namespace std;

bool compareString(string a, string b){
    if(a.length() != b.length()){
        return false;
    }

        // int j = 0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i] != b[i]){
                return false;
            }
        }

    return true;
}



int main()
{
    // string str;
    // cin >> str;
    // // getline(cin,str);
    // cout<<"Length is --> " << str.length()<<endl;
    // cout <<"isEmpty: " << str.empty() << endl;
    // str.push_back('A');
    // cout << str << endl;
    // str.pop_back();
    // cout<<str<<endl;
    // cout << str.substr(0,5)<<endl;

    // string a = "john";
    // string b = "john";

    // if(a.compare(b) == 0)
    // {
    //     cout <<"a and b are exactly smae " <<endl;
    // }
    // else{
    //     cout <<"a and b are exactly not same "<<endl;
    // }

    // string x = "bcda";
    // string y = "bcda";
    // cout << x.compare(y)<<endl;

    // string sentence = "Hello jee kasie ho sare";
    // string target = "johnn";

    // // cout <<sentence.find(target);

    // if(sentence.find(target) == string::npos){
    //     cout <<"Not Found"<<endl;
    // }

//    string str = "My name is Rohit";
//    string word = "Souradeep";

//    str.replace(11,5,word);

//    cout << str<<endl;

    string str = "ABCDEFGHIJKLMN";
    str.erase(12,2);
    cout << str ;


}
