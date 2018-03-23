#include <iostream>
#include <vector>
#include <ctime>
#include <unordered_set>

using namespace std;

class Solution {
public:
    //单词拆分
    /*
     * @param s: A string
     * @param dict: A dictionary of words dict
     * @return: A boolean
     */
    bool wordBreak(string &s, unordered_set<string> &dict) {
        // write your code here
        vector<bool> dp = vector<bool>(s.size() + 1, false);
        dp[0] = true;
        for (int i = 1; i < s.size() + 1; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] == true && dict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break;
                }
            }
        }
        for (int k = 0; k < 10; ++k) {
            cout<<dp[k];
        }

        return dp[s.size()];
    }


};
int main(){
    vector<bool> dp = vector<bool>(10, false);
    dp[0] = true;
    for (int k = 0; k < 10; ++k) {
        cout<<dp[k];
    }
}