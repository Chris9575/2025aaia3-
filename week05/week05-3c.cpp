///week05-3c.cpp
///Part3:stringstream Part 4:reverse�ϹL�� Part 5:�����Y+���[+���[+���[
///CPE �ĤG�D UVA483 �˹L��
#include <iostream>
#include <sstream>///pART 3:stringstream���ɮ׫�sstream
#include <algorithm>///Part 4:reverse���t��k
using namespace std;
int main()
{
    string line;///�@��r���r�� part 1:Input
    while(getline(cin,line)){///Ū�i��
        stringstream ss(line);///Part 3:��stringstream�_�r
        string word;///�r��o��
        ss>>word;///�����Y�b�o
         reverse(word.begin(),word.end());
            cout<<word;///�����Y�S���Ů�
        while(ss>>word){///Part 3:��ss�_�r
            reverse(word.begin(),word.end());///Part4
            cout<<" "<<word;///+���[
            ///cout<<"Ū��F"<<word<<endl;///Part3
        }
        cout<<endl;///part 2:outout
    }

}
