#include <iostream>
#include <vector>
using namespace std;
void nbit(int n, int one, int zero, vector<string> &ans, string &temp)
{
    if (temp.size() == n)
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back('1');
    nbit(n, one + 1, zero, ans, temp);
    temp.pop_back();
    
    if (one > zero)
    {
        temp.push_back('0');
        nbit(n, one, zero + 1, ans, temp);
        temp.pop_back();
    }
}

int main()
{
    int n = 4;
    vector<string> ans;
    string temp;
    nbit(n, 0, 0, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}