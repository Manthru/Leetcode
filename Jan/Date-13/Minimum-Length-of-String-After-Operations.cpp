#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();

        // edge case
        if(n <= 2) {
            return n;
        }
        
        unordered_map<char, int>mpp;
        for(auto it : s) {
            mpp[it]++;
        }

        int ans = 0;
        for(auto it : mpp) {
            if(it.second % 2 != 0) {
                ans += 1;
            }else {
                ans += 2;
            }
        }

        return ans;

            
    }
};


int main() {
    string str = "abaacbcbb";

    Solution s;
    cout<<s.minimumLength(str)<<endl;

    return 0;
}