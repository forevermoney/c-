#include <iostream>
#include <vector>
#include <ctime>
#include <unordered_set>

/*
   using namespace std;
class ListNode{
public:
      int val;
      ListNode next;
      void ListNode(int val,ListNode next){
          this->val=val;
          this->next=next;
      }
};

class Solution {
public:
    //单词拆分
    /*
     * @param s: A string
     * @param dict: A dictionary of words dict
     * @return: A boolean
     */
/*bool wordBreak(string &s, unordered_set<string> &dict) {
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
     /*
      *实现链表的排序
      */

/*};
/*int main(){
    vector<bool> dp = vector<bool>(10, false);
    dp[0] = true;
    for (int k = 0; k < 10; ++k) {
        cout<<dp[k];
    }

}
*/
/*  ----------贪心算法---------*/
/*-------------买卖股票的最佳时机----------*/
using namespace std;
class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
    int maxProfit(vector<int> &prices) {
        // write your code here
        if(prices.size() == 0){ //时刻注意数组越界
            return 0;
        }

        int max = 0;
        int cur = prices[0];
        for(int i = 0; i < prices.size(); ++i){
            if(prices[i] < cur){ //卖掉会亏
                cur = prices[i];
            }else{ //卖掉能挣
                int tmp = prices[i] - cur;
                if(tmp > max){
                    max = tmp;
                }
            }
        }
        return max;
    }
};
int main(){
    vector<int> a;
    for(int i=0;i<5;i++){
        a.push_back(i);
    }
    Solution *s=new Solution;
    cout<<s->maxProfit(a);
    return 0;
}