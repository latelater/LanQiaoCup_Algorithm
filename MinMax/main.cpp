//��������
//����n�������ҳ���n���������ֵ����Сֵ���͡�
//
//�����ʽ
//��һ��Ϊ����n����ʾ���ĸ�����
//
//�ڶ�����n������Ϊ������n������ÿ�����ľ���ֵ��С��10000��
//
//�����ʽ
//������У�ÿ��һ����������һ�б�ʾ��Щ���е����ֵ���ڶ��б�ʾ��Щ���е���Сֵ�������б�ʾ��Щ���ĺ͡�
//��������
//5
//1 3 -2 4 5
//�������
//5
//-2
//11
//���ݹ�ģ��Լ��
//1 <= n <= 10000��

#include<iostream>
using namespace std;

void MinMax(int n, int *arr){
    int t = arr[0], sum = 0;//���ֵ�ĳ�ʼ��Ϊ�����0��
    for(int i = 0; i < n; i++){//Max
        if(arr[i] > t){
            t = arr[i];
        }
        sum += arr[i];
    }

    int x = arr[0];//��Сֵ�ĳ�ʼ��Ϊ�����0��
    for(int i = 0; i < n; i++){//Min
        if(arr[i] < x){
            x = arr[i];
        }
    }

    cout<<t<<endl;
    cout<<x<<endl;
    cout<<sum<<endl;
}

int main(){
    int n;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    MinMax(n, arr);
    return 0;
}
