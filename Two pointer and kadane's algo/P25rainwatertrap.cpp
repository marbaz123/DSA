// rain water traping interview question
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void input(vector<int> &v)
{
    cout << "enter the elements of the array: ";
    for (int i = 0; i < v.size(); i++)
        cin >> v[i];
    cout << endl;
}
void print(vector<int> v)
{
    cout << "required array: ";
    for (auto i : v)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    vector<int> height(n);
    input(height);

    
    int maxleft = 0, maxright = 0, water = 0;
    int maxheight = height[0], index = 0;

    for (int i = 0; i < n; i++)
    {
        if (height[i] > maxheight)
        {
            maxheight = height[i];
            index = i;
        }
    }

    for (int i = 0; i < index; i++)
    {
        if (maxleft > height[i])
            water += maxleft - height[i];
        else
            maxleft = height[i];
    }
    for (int i = n - 1; i > index; i--)
    {
        if (maxright > height[i])
            water += maxright - height[i];
        else
            maxright = height[i];
    }

    cout << water;
}