//week01-1
//LeetCode 28. Find the Index of the First Occurrence in a String
//�bhaystack ���_���̧��needle�w(�j�����w)
// haystack: sadbutsad
//needle:
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H=haystack.length(),N=needle.length();//�r�ꪺ����
        for(int i=0;i<=H-N;i++){//9��3�o��6
            if(haystack.substr(i,N)==needle) return i;//��쵪��
        }
        return -1;//�j��̭��䤣��Needle�N����
    }
};
