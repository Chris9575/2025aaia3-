///wee;02-5.cpp LeetCode �ǲ߭p�e �ĤG�D
///389. Find The Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //�����A�έp�@�U26�Ӧr���A�X�{�X��
        int A [256]={};//�}�C�ŧi�AASCII:0-255
        for(int i=0;i<s.length();i++){
            char c=s[i];//����i�Ӧr��
            A[c]++;//�����A��i�������r����l��
        }
        for(int i=0;i<t.length();i++){
            char c=t[i];//����i�Ӧr��
            A[c]--;//�q��l�̮��X�r��
            if(A[c]<0)return c;//�r�������ΡA�N�O�L!!!!�ʥL!!
    }
    return 0;
    }
};
