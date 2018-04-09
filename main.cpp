#include <iostream>
#include <vector>
#include <ctime>
#include <unordered_set>
#include <stack>
/*-----------动态规划-----------*/
/*----------单词拆分----------*/
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
/*
using namespace std;
class Solution {
public:
    /**
     * @param prices: Given an integer array
     * @return: Maximum profit
     */
/* int maxProfit(vector<int> &prices) {
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
}*/;
/*-----------二叉树----------*/
/*---------前序和中序遍历构造二叉树---------*/
/*
 * 前序遍历的顺序为左根右
 * 中序遍历的顺序为根左右
 * 因此只需要寻找到前序遍历中和中序遍历首节点相等的点,即可按照相应的顺序恢复出原本的二叉树结构
 * 分清完全二叉树,满二叉树的区别
 * 关于二叉树的分类有很多变型,有三节点树,二叉查找树,红黑树等都需有一个具体的了解
 */
//  Definition of TreeNode:
//TODO
/*
using namespace std;
  class TreeNode {
  public:
      int val;
      TreeNode *left, *right;
      TreeNode(int val) {
          this->val = val;
          this->left = this->right = NULL;
      }
  };


class Solution {
public:
    /**
     * @param inorder: A list of integers that inorder traversal of a tree
     * @param postorder: A list of integers that postorder traversal of a tree
     * @return: Root of a tree
     */
/*   TreeNode * buildTree(vector<int> &inorder, vector<int> &postorder) {
       // write your code here
       TreeNode *tn=new TreeNode(0);
       int i;
       if(tn==NULL){
           return  NULL;
       }
       tn->val=inorder[0];
       while(i<inorder.size()-1){
           if(inorder[i]>inorder[i+1]){
               tn->left->val=inorder.at(i+1);
               tn=tn->left;
           } else if(inorder[i]<inorder[i+1]){

       }
   }
};
*/
/*--------------栈---------------*/
/*实现一个带有取最小值min方法的栈，min方法将返回当前栈中的最小值。
 *你实现的栈将支持push，pop 和 min 操作，所有操作要求都在O(1)时间内完成。
 */
//Tips:
// 每次压入一个新元素的时候，先将栈里所有元素排序，让最小的元素位于栈顶，这样就能在O(1)的时间得到最小的元素了。
// 这样有一个缺点就是，不能保证最后压入的元素最先出栈。
//《剑指offer》给出的思路是增加一个辅助栈（用于存放数据栈之前最小的元素与新压入栈元素之间的较小值）。

/*using namespace std;
class MinStack {
public:
    stack<int> mainStack;
    stack<int> helpStack;

    MinStack() {
        // do intialization if necessary
    }

    /*
     * @param number: An integer
     * @return: nothing
     */
/*
    void push(int number) {
        // write your code here
        int top;
        mainStack.push(number);

        if (!helpStack.empty())
            top = helpStack.top();
        else
            top = number;

        if (number > top)
            helpStack.push(top);
        else
            helpStack.push(number);
    }

    /*
     * @return: An integer
     */
/*
    int pop() {
        // write your code here
        if(!mainStack.empty()) {
            int data = mainStack.top();
            mainStack.pop();
            helpStack.pop();
            return data;
        }
    }

    /*
     * @return: An integer
     */
/*
    int min() {
        // write your code here
        if(!helpStack.empty()) {
            int data = helpStack.top();
            return data;
        }
    }
};
*/
/*-----------------归并排序-----------------*/

/*using namespace std;

class Solution {
public:
    void Mersort(vector<int> &a, int l1, int r1, int l2, int r2) {
        int i = l1;
        int j = l2;
        int k = 0;
        int n = (r1 - l1 + 1) + (r2 - l2 + 1);
        vector<int> temp(n);
        while(i<=r1&&j<=r2) {
            if (a[i] <a[j]) {
                /*
                 * 特别注意i++与++i的区别,一个是先引用再增加,一个是先增加再引用
                 */
 /*               temp[k++] = a[i++];
            }
            else {
                temp[k++] = a[j++];
            }
        }
        while (i <= r1) {
            temp[k++] = a[i++];
        }
        while (j <= r2) {
            temp[k++] = a[j++];
        }
        for (int l = 0; l < n; l++) {
            a[l1 + l] = temp[l];
        }

    }

    void merge(vector<int> &a, int start, int end) {
        if(start<end) {
            int mid = (start + end)/2;
            merge(a, start, mid);
            merge(a, mid + 1, end);
            Mersort(a, start, mid, mid + 1, end);
        }
    }

};

int main() {
    Solution *s=new Solution;
     vector<int> a={1,4,6,3,8,7,0};
    s->merge(a,0,6);
    for(auto x:a){
        cout<<x<<",";
    }
    cout << endl;
    return 0;
}
