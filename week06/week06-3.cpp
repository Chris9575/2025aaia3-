//week06-3.cpp
//LeetCode �ǲ߭p�eSimulation ���� �Ĥ@�D682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>a;
        for(string op : operations){//C++�i���j��
           // cout<<op<<"\n";//�ոլ�,�|�L�X�ƻ�
           if(op[0]=='+'){//�⥽��Ƭۥ[,�A��^�h
                int temp=a.back();//���O�U�̫�@��
                a.pop_back();//�ȮɦR���L
                int temp2=a.back();//�b�O�U�̫�ⶵ
                a.push_back(temp);//����̫�@����^�h
                a.push_back(temp+temp2);//��Ƭۥ[,�b��^�h
           }else if(op[0]=='D'){//�ƻs�̫�@��A���G,�b��|�h
                a.push_back(a.back()*2);
           }else if(op[0]=='C'){//�R���̫�@��
                a.pop_back();
           }else{//��stoi(op)���,��^�h
                a.push_back(stoi(op));
           }
        }
        //�̫�,��for�j��,��}�Ca����,�����[�_��
        int ans=0;
        for(int now:a){//C++�i���j��,�]�i�H��for(int i=0;i<a.size();i++
            ans+=now;
        }
        return ans;//���H�Kreturn 0 ���@�U�A��
    }
};
