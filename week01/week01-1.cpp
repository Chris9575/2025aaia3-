//week01-1
//LeetCode 28. Find the Index of the First Occurrence in a String
//在haystack 乾稻草堆裡找到needle針(大海撈針)
// haystack: sadbutsad
//needle:
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H=haystack.length(),N=needle.length();//字串的長度
        for(int i=0;i<=H-N;i++){//9檢3得到6
            if(haystack.substr(i,N)==needle) return i;//找到答案
        }
        return -1;//迴圈裡面找不到Needle就失敗
    }
};
