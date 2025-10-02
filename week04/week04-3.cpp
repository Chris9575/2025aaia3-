//week04-3.cpp
//LeetCode 學習計畫第7題 66. Plus One
//123
//  4最右邊開始,+1完成
//4321
//   2最右邊開始,+1完成
//949
//  0有進位,怎麼辦?不可以return繼續做
// 5最右邊+1完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();//上週教過,陣列的大小
        for(int i=N-1;i>=0;i--){//倒過來的迴圈
            if(digits[i]==9){//要進位,麻煩了
                digits[i]=0;//射程0繼續做、不結束
            }else{//不用進位的話,超好笑!直接++就結束
                digits[i]++;//簡單+1
                return digits;//把全部的陣列當答案return
                }
        }
        digits.insert(digits.begin(),1);//最左邊要插入1
        return digits;//結束
    }
};
