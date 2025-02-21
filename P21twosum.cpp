#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> arr(5);
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(11);
    arr.push_back(15);
    arr.push_back(27);
    int target = 22;

        vector<int> a(2);
        // int x,mid,start,end;
        // for(int i=0;i<arr.size();i++){
        //     x = target - arr[i];
        //     start = i+1;
        //     end = arr.size()-1;
        //     while(start<=end){
        //         mid = start + (end - start)/2;
        //         if (arr[mid]==x)
        //             break;
        //         else if(arr[mid]>x)
        //         end = mid-1;
        //         else
        //         start = mid+1;
        //     }
        //     if(arr[mid]+arr[i]==target)
        //     {
        //         a[0] = i+1;
        //         a[1] = mid+1;
        //         break;
        //     }
        // }

        //second method
        int start = 0,end = arr.size()-1;
        while(start<end){
            if(arr[start] + arr[end]==target){
                a[0] = start + 1;
                a[1] = end + 1;
                break;
            }
            else if (arr[start] + arr[end]>target)
            end--;
            else
            start++;
        }
        
        for(int i=0;i<2;i++)
        cout<<a[i]<<" ";
}