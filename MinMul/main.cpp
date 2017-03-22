//��������
//����������������n����
//���������ÿ����������˳��ʹ������������ͬ�±�Ԫ�ض�Ӧ��ˣ�Ȼ����ӵĺ���С��Ҫ�������������Сֵ��
//���������������ֱ�Ϊ:1 3����-5��-2 4 1
//
//������ô��Ӧ�˻�ȡ�͵���СֵӦΪ��
//����(-5) * 4 + 3 * (-2) + 1 * 1 = -25
//�����ʽ
//������һ����һ����T��ʾ��������������ÿ�����ݣ��ȶ���һ��n������������ÿ��n������ÿ�����ľ���ֵС�ڵ���1000��
//����n<=8,T<=1000
//�����ʽ
//����һ������ʾ�𰸡�
//��������
//2
//3
//1 3 -5
//-2 4 1
//5
//1 2 3 4 5
//1 0 1 0 1
//
//�������
//
//
//-25
//6

//�ⷨ������һ���С�������򣬵ڶ���Ӵ�С�����ٽ���Ӧ�±���ˡ�

#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort1(int n, int *arr){  //��С����
    bool temp = 0;
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = n-1; j > i; j--){
            if(arr[j] < arr[j-1]){
                swap(&arr[j-1], &arr[j]);
                temp = 1;
            }
        }
        if(temp == 0) break;
    }
}

void sort2(int n, int *arr){ //�Ӵ�С
    bool temp = 0;
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = n-1; j > i; j--){
            if(arr[j] > arr[j-1]){
                swap(&arr[j-1], &arr[j]);
                temp = 1;
            }
        }
        if(temp == 0) break;
    }
}

int main()
{
    int N, n;
    cin >> N;

    int *sum = new int[N];
    for(int j = 0; j < N; j++){
        cin >> n;
        sum[j] = 0;
        int *arr1 = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        int *arr2 = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        sort1(n, arr1);
        sort2(n, arr2);
        for(int i = 0; i < n; i++){
            sum[j] += arr1[i] * arr2[i];
        }
        delete []arr1;
        delete []arr2;
    }

    for(int i = 0; i < N; i++){
        cout << sum[i] <<endl;
    }
    return 0;
}
