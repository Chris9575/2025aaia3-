///week04-6.cpp
///練習各種伸縮自如的陣列vector<int>a的初始化
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; ///(1)沒有任何初始化的參數,長度是0
    cout<<endl<<"陳述a的長度是"<<a.size()<<endl;

    vector<int>b(3);///(2)有個參數,對應長度變成3
    cout<<endl<<"陳述b的長度是"<<b.size()<<endl;
    for(int i=0;i<b.size();i++) cout << b[i]<<" ";

    vector<int>c(3,88);///(3)長度是3,裡面都塞88
    cout<<endl<<"陳述c的長度是"<<b.size()<<endl;
    for(int i=0;i<c.size();i++) cout << c[i]<<" ";

    int d[10]={9,8,7,1,2,3,6,5,4,0};///c語言的陣列
    vector<int>f(d,d+4);///用c的陣列的某個範圍來初始化 4格
    cout<<endl<<"陳述f的長度是"<<f.size()<<endl;
    for(int i=0;i<f.size();i++) cout << f[i]<<" ";

    vector<int>g(d,d+10);///用c的陣列的某個範圍來初始化 10格
    cout<<endl<<"陳述g的長度是"<<g.size()<<endl;
    for(int i=0;i<g.size();i++) cout << g[i]<<" ";

}
