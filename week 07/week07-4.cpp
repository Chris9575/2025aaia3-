//week07-4.cpp �ǲ߭p�eSimulation������4�D
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions=instructions+instructions+instructions+instructions;//��4��
        cout<<instructions;
        int x=0,y=0;//x�y��,y�y��
        int d=0;//d:��Vdirection 0:�_ 1:�F 2:�n 3:��
        //�k��d=(d+1)%4 ��4����
        //����d=(d-1+4)%4=(d+3)%4 ���M�i�H�˹L��,�ӯ��_
        int dx[4]={0,1,0,-1};//�e�i�@���,�|��x+=dx[d]��y+=dy[d]
        int dy[4]={1,0,-1,0};//�o���O�a��2D�ҫ������,�M�w�e�i�h��
        for(char c : instructions){//�̷Ӧr�������O�@����1�Ӱʧ@
            if(c=='G'){//�e�i�@��,�t�Xdx[d] dy[d]�e�i
                x += dx[d];
                y += dy[d];
            }else if(c=='R'){//�k��
                d=(d+1)%4;
            }else if(c=='L'){//����
                d=(d+3)%4;
            }
        }//���}�j���....���M�|�@������,���ɭԨ����^��,���ɭԷ|�^��
        cout<<'x'<<x<<'y'<<y<<endl;
        if(x==0 && y==0)return true;
        else return false;
    }
};
