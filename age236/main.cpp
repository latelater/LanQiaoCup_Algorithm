//��������
//
//ĳ����ĳ�꿪ʼÿ�궼�ٰ�һ������party������ÿ�ζ�Ҫ��Ϩ��������ͬ����������
//
//��������������һ����Ϩ��236������
//
//���ʣ����Ӷ����꿪ʼ������party�ģ�


#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for(int j = 1; j < 100; j++){
        sum = 0;
        for(int i = j; i < 100; i++){
            sum += i;
            if(sum == 236){
                cout<<j<<" "<<i<<" "<<sum;
                break;
            }
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
