#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector <int>& v){
    cout<<"enter the elements of the array: ";
    for(int i=0;i<v.size();i++)
    cin>>v[i];
    cout<<endl;
}
void print(vector <int> v){
    cout<<"required array: ";
    for(auto i :v)
    cout<<i<<" ";
    cout<<endl;

}
bool divide(vector<int>v,int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    sum += v[i];
    int prefix = 0;
    for(int i = 0;i<n-1;i++)
    {
        prefix += v[i];
        if(prefix==(sum-prefix)){
            return 1;
        }
        
    }
    return 0;
}
int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int> v(n);
    input(v);
    print(v);

    cout<<divide(v,n);
}