//week03-2b.cpp璶糶ㄢΩ
//LeetCode 厩策璸礶材㏄ 1822. Sign of the Product of an Array
//р皚癬ㄓカタ计,璽计,临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//0┯粄㎝计,常穦跑Θ0,Τ1程,或獽或
        for(int i=0;i<nums.size();i++){//Τ碭计,癹伴碞禲碭Ω
            if(nums[i]>0) ans*=+1;
            if(nums[i]<0) ans*=-1;
            if(nums[i]==0) ans*=0;//ans*=nums[i] //–Ωрnums[i]秈ans柑
        }//计禫禫,1000计1000碞脄┮祘Α岿
        if(ans>0) return 1;
        if(ans<0) return-1;
        return 0;
    }
};
