//��������
//���������������󣬷ֱ���m*s��s*n��С���������������˵Ľ����
//�����ʽ
//������һ�У��ո����������������m,s,n����������200����
//����������m�У�ÿ��s���ո��������������ʾ����A��i��j����
//����������s�У�ÿ��n���ո��������������ʾ����B��i��j����
//�����ʽ
//����m�У�ÿ��n���ո��������������������ľ���C��i��j����ֵ��
//��������
//2 3 2
//1 0 -1
//1 1 -3
//0 3
//1 2
//3 1
//�������
//-3 2
//-8 2
//
//��ʾ
//����CӦ����m��n�У�����C(i,j)���ھ���A��i�������������B��j�����������ڻ���
//����������C(1,1)=(1,0,-1)*(0,1,3) = 1 * 0 +0*1+(-1)*3=-3


#include <iostream>

using namespace std;

int main()
{
    int m, s, n;
    cin >> m >> s >> n;
    int **arr1 = new int*[m];
    for(int i = 0; i < m; i++){
        arr1[i] = new int[s];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < s; j++){
            cin >> arr1[i][j];
        }
    }

    int **arr2 = new int*[s];
    for(int i = 0; i < s; i++){
        arr2[i] = new int[n];
    }
    for(int i = 0; i < s; i++){
        for(int j = 0; j < n; j++){
            cin >> arr2[i][j];
        }
    }

    int **p = new int*[m];
    for(int i = 0; i < m; i++){
        p[i] = new int[n];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            p[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++){
        for(int k = 0; k < n; k++){
            for(int j = 0; j < s; j++){
                p[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
