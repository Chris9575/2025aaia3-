//week03-3a.cpp�G�X�@���Ĥ@��k �⤣�O0����X�ӡB�Ȯɩ�bans�A��^�h
//LeetCode �ǲ߭p�e283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;//�Ψө񤣾A0����
        for(int i=0;i<nums.size();i++){
                if(nums[i]!=0)ans.push_back(nums[i]);
        }//�W���⤣�O0���ƼȮɩ�bans��,���@�L�b��^�h
        //�A��for�j���^�h
        for(int i=0;i<nums.size();i++){
                if(i<ans.size())nums[i]=ans[i];//��^�h
                else nums[i]=0;//��L����0
        }
    }
};
