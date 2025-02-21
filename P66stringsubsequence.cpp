#include <iostream>
#include <vector>
using namespace std;
void subseq(string arr, int index, int n, vector<string>&ans,string &temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    subseq(arr, index + 1, n, ans, temp);
    temp.push_back(arr[index]);
    subseq(arr, index + 1, n, ans, temp);
    temp.pop_back();
}
int main()
{
    string arr = "abc";
    vector <string> ans;
    string temp;
    subseq(arr, 0, arr.length(), ans, temp);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}