//��������
//������дһ����������һ���ַ��������Ȳ�����20����Ȼ�������ַ����ڵ�ÿһ���ַ����д�Сд�任��������д��ĸ���Сд��Сд��ĸ��ɴ�д��Ȼ�������µ��ַ��������
//���������ʽ������һ���ַ�������������ַ�������ֻ����Ӣ����ĸ���������������͵��ַ���Ҳû�пո�
//���������ʽ���������ת������ַ�����
//�����������
//��������
//AeDb
//�������
//aEdB


#include <iostream>
#include<string>
using namespace std;

int main()
{
    char *arr = new char[20];
    int length = 0;


    cin >> arr;
    while(arr[length] != '\0'){
        length++;
    }
    for(int i = 0; i < length; i++){
        if(arr[i] >= 65 && arr[i] <= 90){
            arr[i] = 32 + arr[i];
        }
        else

            if(arr[i] >= 97 && arr[i] <= 122){
                arr[i] = arr[i] - 32;
            }
    }

    cout << arr;
    return 0;
}
