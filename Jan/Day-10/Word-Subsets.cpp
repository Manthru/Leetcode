#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int freq[26] = {0};

        for(auto it : words2) {
            int count[26] = {0};
            for(auto t : it) {
                count[t-'a'] += 1; 
            }

            for(int i =0; i<26; i++) {
                freq[i] = max(freq[i], count[i]); 
            }
        }


        vector<string>universal;

        for(auto it : words1) {

            int hashMap[26] = {0};
            for(auto t : it) {
                hashMap[t-'a'] += 1;
            }

            bool flag = true;

            for(int i=0; i<26; i++) {
                if(hashMap[i] < freq[i]) {
                    flag = false;
                    break;
                }
            }

            if(flag) {
                universal.push_back(it);
            }
        }

        return universal;
    }
};

int main() {

    vector<string>words1 = {"amazon","apple","facebook","google","leetcode"};

    vector<string>words2 = {"e","o"};

    Solution s;
    vector<string>ans = s.wordSubsets(words1, words2);

    for(auto it : ans) {
        cout<<it<<" ";
    }

    return 0;



}