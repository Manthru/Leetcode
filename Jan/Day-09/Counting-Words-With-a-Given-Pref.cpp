#include<bits/stdc++.h>
using namespace std;

class Solution {
    private:
    bool match(string str, string target) {
        for(int i=0; i<str.size(); i++) {
            string prefix = str.substr(0, i+1);
            
            // Edge case
            if(prefix > target) {
                return false;
            }

            if(str.substr(0,i+1) == target) {
                return true;
            }
        }
        return false;
    }

// main Funcation
public:
    int prefixCount(vector<string>& words, string pref) {

        int n = words.size();
        int count = 0;

        for(int i=0; i<words.size(); i++) {

            // Edge case
            if(words[i] < pref) {
                continue;
            }

            if(match(words[i], pref)) {
                count++;
            }
        }

        return count;
    }
};



int main() {
    vector<string>words = {"pay","attention","practice","attend"};

    string pref = "at";

    Solution s;
    int ans = s.prefixCount(words, pref);

    cout<<ans<<endl;

    return 0;

}