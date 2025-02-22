#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solve(vector<int>& arr, int n) {
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int score = 0;
    for (auto& entry : freq) {
        score += entry.second / 2;
    }
    return score;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << solve(arr, n) << endl;
    }
}