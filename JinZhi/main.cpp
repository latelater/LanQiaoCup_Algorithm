//��������
//��������n��ʮ��������������������Ƕ�Ӧ�İ˽�������
//
//�����ʽ
//��������ĵ�һ��Ϊһ��������n ��1<=n<=10����
//����������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��
//
//�����ʽ
//�������n�У�ÿ��Ϊ�����Ӧ�İ˽�����������
//
//������ע�⡿
//���������ʮ��������������ǰ��0������012A��
//��������İ˽�����Ҳ������ǰ��0��
//
//��������
//����2
//����39
//����123ABC
//
//�������
//����71
//����4435274
//
//��������ʾ��
//�����Ƚ�ʮ��������ת����ʮ������������ĳ������ת���ɰ˽��ơ�

#include<iostream>
#include<math.h>
using namespace std;


int size(char *p)//�������16���Ƶĳ���
{
	int n=0;
	while(*(p)!='\0')
	{
		p++;
		n++;
	}
	return n;
}

long long swap16(char *arr, int n){
    int a, j = 0;
    long long q = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] >= '0' && arr[i] <= '9'){
            a = arr[i] - '0';
            q += a * pow(16, j);
        }

        if(arr[i] >= 'A' && arr[i] <= 'F'){
            a = arr[i] - 'A' + 10;
            q += a * pow(16, j);
        }
        j++;
    }


    return q;
}


void swap(int x){
    int *arr1;
    arr1 = new int[8];
    if(x == 0) cout<<0;//�˴�Ϊ��x = 0ʱ�Ĵ���
    int a, i = 0;
    char b;
    while(x >= 1){
        b = x%8;
        x = x/8;
        arr1[i] = b;
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        cout<<arr1[j];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i= 0; i < n; i++){
        char *arr;
        int len, x;
        arr = new char[8];
        cin >> arr;//����16����
        len = size(arr);
        x = swap16(arr, len);//ת����10����
        swap(x);//ת����8����
    }

    return 0;
}
