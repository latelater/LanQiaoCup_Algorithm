//��������
//�����Ӽ�������һ��������8λ������ʮ���������ַ���������ת��Ϊ����ʮ�������������
//����ע��ʮ���������е�10~15�ֱ��ô�д��Ӣ����ĸA��B��C��D��E��F��ʾ��
//��������
//FFFF
//�������
//65535

//
//    cout << "long long: \t\t" << "��ռ�ֽ�����" << sizeof(long long);
//    cout << "\t���ֵ��" << (numeric_limits<long long>::max)();
//    cout << "\t��Сֵ��" << (numeric_limits<long long>::min)() << endl;

#include<iostream>
#include<math.h>
using namespace std;

int size(char *p)
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

int main(){
    char *arr;
    int n;
    arr = new char[8];
    cin >> arr;
    n = size(arr);
    cout << swap16(arr, n);
    return 0;
}



