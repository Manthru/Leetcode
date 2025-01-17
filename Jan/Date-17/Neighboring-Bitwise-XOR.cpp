#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        
        int sum = accumulate(derived.begin(), derived.end(), 0);

        return sum%2 == 0;
        
    }
};



int main() {

    vector<int>derived = {1,1,0};

    Solution s;
    cout<<s.doesValidArrayExist(derived)<<endl;

    return 0;

}