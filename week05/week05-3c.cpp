///week05-3c.cpp
///Part3:stringstream Part 4:reverse反過來 Part 5:火車頭+車廂+車廂+車廂
///CPE 第二題 UVA483 倒過來
#include <iostream>
#include <sstream>///pART 3:stringstream的檔案室sstream
#include <algorithm>///Part 4:reverse的演算法
using namespace std;
int main()
{
    string line;///一行字的字串 part 1:Input
    while(getline(cin,line)){///讀進來
        stringstream ss(line);///Part 3:用stringstream斷字
        string word;///字放這裡
        ss>>word;///火車頭在這
         reverse(word.begin(),word.end());
            cout<<word;///火車頭沒有空格
        while(ss>>word){///Part 3:用ss斷字
            reverse(word.begin(),word.end());///Part4
            cout<<" "<<word;///+車廂
            ///cout<<"讀到了"<<word<<endl;///Part3
        }
        cout<<endl;///part 2:outout
    }

}
