//week03-2b.cpp�G�X�@�n�g�⦸
//LeetCode �ǲ߭p�e�ĤK�P 1822. Sign of the Product of an Array
//��}�C���_�Ӭݥ�����,�t��,�٬O0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;//�]��0�ӻ{�M��,���|�ܦ�0,�u��1�̨�,���ƻ�K�ƻ�
        for(int i=0;i<nums.size();i++){//�ݦ��X�Ӽ�,�j��N�]�X��
            if(nums[i]>0) ans*=+1;
            if(nums[i]<0) ans*=-1;
            if(nums[i]==0) ans*=0;//ans*=nums[i] //�C����nums[i]���ians��
        }//�Ʀr�V���V�j,1000�ӼƦr����1000�N�z���F�ҥH�{�����F
        if(ans>0) return 1;
        if(ans<0) return-1;
        return 0;
    }
};
