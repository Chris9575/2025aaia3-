//week01-3c.cpp
# include <stdio.h>//�ϥ�c�y�����~��,�t�dinput output
int main()
{
    int n;
    scanf("%d",&n);//�ϥ�c�y����scan with format ��J
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i*i;
    }
    printf("%d",ans);//�ϥ�c�y����print with formaat �L�X��
}
