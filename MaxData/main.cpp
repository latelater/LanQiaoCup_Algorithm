//��������
//�������ڸ�����������a[],Ѱ���������ֵ���������±ꡣ
//�����ʽ
//������������a[],����Ԫ�ظ���С��1����100��������ݷ������У���һ��ֻ��һ��������ʾ����Ԫ�ظ������ڶ���Ϊ����ĸ���Ԫ�ء�
//�����ʽ
//����������ֵ�������±�
//��������
//3
//3 2 1
//
//�������
//
//
//3 0


#include <iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int data = a[0], temp = 0;
    for(int i = 0; i < n; i++){
        if(data < a[i]){
            data = a[i];
            temp = i;
        }
    }
    cout << data << " " << temp <<endl;
    return 0;
}
