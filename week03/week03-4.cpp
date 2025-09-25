//week03-4.cpp
//LeetCode 挑戰提(賺金幣題)120Triangle找到最上面往下走的最小值
class Solution {//使用動態規劃,慢慢更新陣列就好了
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]從i層的第j個
        int N=triangle.size();//總共有幾層
        //從下望上查,最下面的第N-1層,沒問題,就是本身的最小值
        for(int i=N-2;i>=0;i--){//到過來的迴圈,從N-2往上
            for(int j=0;j<=i;j++){//從左到右,第一層有0..1個數,都要更新
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
                //每個人,要看它下面2個選擇(正下方、下方偏右),找最小的那一個
            }
        }

        return triangle[0][0];
    }
};
