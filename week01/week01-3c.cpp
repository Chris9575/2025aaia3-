//week01-3c.cpp
# include <stdio.h>//使用c語言的外掛,負責input output
int main()
{
    int n;
    scanf("%d",&n);//使用c語言的scan with format 輸入
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i*i;
    }
    printf("%d",ans);//使用c語言的print with formaat 印出來
}
