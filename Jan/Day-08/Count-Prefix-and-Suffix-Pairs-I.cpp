#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPrefixAndSuffix(string str1, string str2) {

        int n = str1.size();
        int m = str2.size();
        
        if(n > m) {
            return false;
        }

        for(int i=0; i<str2.size(); i++) {

            string prefix = str2.substr(0, i+1);
            string suffix = str2.substr(m-n);

            if(str1 == prefix && str1 == suffix) {
                return true;
            }
        }

        return false;
    }


public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;

        for(int i=0; i<words.size()-1; i++) {
            for(int j=i+1; j<words.size(); j++) {

                if(isPrefixAndSuffix(words[i], words[j])) {
                    count++;
                }
            }
        }

        return count;
    }
};



// ------------------------------------------------------------------------------

int main() {
    vector<string>words = {"a","aba","ababa","aa"};
    
    Solution s;
    int ans = s.countPrefixSuffixPairs(words);

    cout<<ans<<endl;

    return 0;
}