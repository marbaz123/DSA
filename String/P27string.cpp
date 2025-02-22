#include <iostream>
using namespace std;
int main (){
    // char ch[20];
    // cin>>ch;
    // ch[4]='\0';
    // cout<<ch<<endl;
    
//     string s;
//     cin>>s;
//     cout<<s;

    // string s;
    // getline(cin,s);
    // cout<<s<<endl;
    // cout<<s.size()<<endl;

    string s1 = "Arbaz";
    string s2 = "Ali";
    // string s3 = s1+s2;
    // cout<<s3<<endl;
    // s3 = s1.append(s2);
    // cout<<s3<<endl;
    // s3 = s3.append(s2);
    // cout<<s3<<endl;

    // s1.push_back('p');
    // cout<<s1<<endl;
    // s1.pop_back();
    // cout<<s1<<endl;
    // s1 = s1 + "p";
    // cout<<s1<<endl;

    string s4 = "Rohit Negi is a \"good\" boy";
    cout<<s4<<endl;

    //reverse of string
    // int start = 0 , end = s4.size()-1;
    // while (start < end){
    //     swap(s4[start],s4[end]);
    //     start++,end--;
    // }
    // cout<<s4<<endl;

    //calculate lenght manually

    // int size = 0;
    // while(s4[size]!='\0'){
    //     size++;
    // }
    // cout<<size<<endl;
     
    //pallindrome
    string str = "naman";
    int start = 0, end = str.size()-1;

    while(start<end){
        if(str[start]!=str[end])
        {
            cout<<"not pallindrome";
            return 0;
        }
        start++,end--;
    } 
    cout<<"pallindrome";


}