///week05-3b.cpp
///Part3:stringstream Part 4:reverse反過來
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
        while(ss>>word){///Part 3:用ss斷字
            reverse(word.begin(),word.end());///Part4
            cout<<"讀到了"<<word<<endl;///Part3
        }
        cout<<line<<endl;///part 2:outout
    }

}
