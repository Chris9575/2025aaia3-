///week05-3b.cpp
///Part3:stringstream Part 4:reverse�ϹL��
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
        while(ss>>word){///Part 3:��ss�_�r
            reverse(word.begin(),word.end());///Part4
            cout<<"Ū��F"<<word<<endl;///Part3
        }
        cout<<line<<endl;///part 2:outout
    }

}
