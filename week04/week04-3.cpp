//week04-3.cpp
//LeetCode �ǲ߭p�e��7�D 66. Plus One
//123
//  4�̥k��}�l,+1����
//4321
//   2�̥k��}�l,+1����
//949
//  0���i��,����?���i�Hreturn�~��
// 5�̥k��+1����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();//�W�g�йL,�}�C���j�p
        for(int i=N-1;i>=0;i--){//�˹L�Ӫ��j��
            if(digits[i]==9){//�n�i��,�·ФF
                digits[i]=0;//�g�{0�~�򰵡B������
            }else{//���ζi�쪺��,�W�n��!����++�N����
                digits[i]++;//²��+1
                return digits;//��������}�C����return
                }
        }
        digits.insert(digits.begin(),1);//�̥���n���J1
        return digits;//����
    }
};
