

//��������
//��������һ������Ϊn���ַ���S������һ������L��ͳ�Ƴ��ȴ��ڵ���L�ĳ��ִ��������Ӵ�����ͬ�ĳ��ֿ����ཻ����
//����ж���������ģ������Ȼ�ж���������һ�γ�������ġ�
//�����ʽ
//������һ��һ������L��
//�����ڶ������ַ���S��
//����L����0���Ҳ�����S�ĳ��ȡ�
//�����ʽ
//����һ�У���ĿҪ����ַ�����
//
//������������1��
//����4
//����bbaabbaaaaa
//
//�����������1��
//����bbaa
//
//������������2��
//����2
//����bbaabbaaaaa
//
//�����������2��
//����aa
//���ݹ�ģ��Լ��
//����n<=60
//����S�������ַ�����СдӢ����ĸ��
//��ʾ
//����ö�����п��ܵ��Ӵ���ͳ�Ƴ��ִ������ҳ������������Ǹ�


#include <iostream>

using namespace std;

int main()
{
    char *arr = new char[60];

    int temp = 1, t, len = 0, s; //tempͳ�Ƴ��ֵ�������; tͳ��ÿһ������

    cin >> s;
    cin >> arr;
    while(arr[len] > 89){
        len++;
    }

    char *str = new char[60];
    char *p = new char[60] ();
    for(int i = 0; i < len-s+1; i++){
        int t = 0, c = 0;
        for(int j = i; j < s+i; j++){
            str[j-i] = arr[j];
//            cout << arr[j];
        }
//        cout << endl;
//        cout << str <<endl;
        for(int j = 0; j < len-s+1; j++){
            c = 0;
            for(int k = 0; k < s; k++){
                if(str[k] == arr[j+k]){
                    c++;
                }
            }
//            cout << c <<" ";
            if(c == s) t++;

        }
//        cout << endl;

        if(t > temp){
            temp = t;
            for(int x = 0; x < s; x++){
                p[x] = str[x];
            }
        }
    }
    cout << p;

    return 0;
}
