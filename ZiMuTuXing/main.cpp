//��������
//������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�
//
//ABCDEFG
//
//BABCDEF
//
//CBABCDE
//
//DCBABCD
//
//EDCBABC
//
//����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�
//
//�����ʽ
//����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
//�����ʽ
//���n�У�ÿ��m���ַ���Ϊ���ͼ�Ρ�
//��������
//5 7
//�������
//ABCDEFG
//BABCDEF
//CBABCDE
//DCBABCD
//EDCBABC
//���ݹ�ģ��Լ��
//1 <= n, m <= 26��

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int m, n;

    cin>>n>>m;

    for(int i = 0; i < n; i++){
        for(int j = i-1; j >= 0; j--){
            char a = 'A';
            a = a + j +1;
            cout<<a;

        }
        for(int j = i; j < m; j++){
            char b = 'A';
            b = b + abs(j - i);
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}
