#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int piles[] = {3,6,11,7};
    int h = 8;
    int start = 0,end= 0,mid,ans,n = 4;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum += piles[i];
            end = max(end,piles[i]);
        }
        start = sum/h;
        if(start == 0)
            start = 1;
        
        while(start <= end){
            mid = start + (end - start)/2;

            int total_time = 0;
            for(int i = 0;i<n;i++){
                total_time += piles[i]/mid;
                if(piles[i]%mid)
                    total_time++;
            }

            if(total_time>h)
                start = mid+1;
            else{
                ans = mid;
                end = mid-1;
            }
        }
        cout<< ans;
}