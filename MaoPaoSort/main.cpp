//��������
//��������һ������Ϊn�����У���������а���С�����˳�����С�1<=n<=200
//�����ʽ
//������һ��Ϊһ������n��
//�����ڶ��а���n��������Ϊ�����������ÿ�������ľ���ֵС��10000��
//�����ʽ
//�������һ�У�����С�����˳��������������С�
//��������
//5
//8 3 6 4 9
//�������
//3 4 6 8 9

/*ð������
eg��7 9 0 5 1
*/

/*
����n���ռ�
 int *array; array=new int[10];
*/

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int p[], int n){

    bool temp; //���ñ���������ϴ�ѭ��û�н�����ֹͣ����
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = n-1; j > i; j--){
            if(p[j] < p[j-1]){
                temp = 1;
                swap(&p[j], &p[j-1]);
            }
        }

        if(temp == 0) break;
    }

    for(int i = 0; i < n; i++){
        cout << p[i] <<" ";
    }

}

int main(){
    int n, *p;
    cin >> n;
    p = new int[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p, n);
    return 0;
}
