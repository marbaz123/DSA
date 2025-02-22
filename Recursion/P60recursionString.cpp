#include <iostream>
using namespace std;
//check pallindrome
bool ispallindrome(string str,int start, int end){
    if(start>=end)
    return 1;
    if(str[start]!=str[end])
    return 0;

    return ispallindrome(str,++start,--end);
}

// //count vowels
// void countvowel(string str, int index,int count){
//     if(index==-1){
//         cout<<endl<<count<<endl;
//         return;
//     }
//     if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
//     count++;
//     countvowel(str,index-1,count);
// }

//count vowels
int countvowel(string str, int index){
    if(index==-1){
        return 0;
    }
    if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
    return 1+countvowel(str,index-1);
    else{
        return countvowel(str,index-1);
    }
}

//reverse of a string
void reverse(string &str,int start,int end){
    if(start>=end)
    return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    reverse(str,++start,--end); 
}

//lower to upper case 
void lowtoup(string &str,int index){
    if(index==-1)
    return;
    str[index] = 'A'+str[index]-'a';
    lowtoup(str,index-1);
}
int main ()
{
    string str = "naman";
    if(ispallindrome(str,0,str.length()-1)){
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }
    //countvowel(str,str.length()-1,0);
    cout<<endl<<countvowel(str,str.length()-1)<<endl;
    string str1 = "arbaz";
    reverse(str1,0,str1.length()-1);
    cout<<str1<<endl;
    lowtoup(str1,str1.length()-1);
    cout<<str1<<endl;
    
}