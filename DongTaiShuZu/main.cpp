//�Ӽ��̶���n��������ʹ�ö�̬����洢����������������������ǵĺ���ƽ��ֵ�ֱ������
//Ҫ�󾡿���ʹ�ú���ʵ�ֳ�����롣ƽ��ֵΪС����ֻ�������������֡�
//��������:
//5
//3 4 0 0 2
//�������:
//9  1
//��������:
//7
//3 2 7 5 2 9 1
//�������:
//29  4


#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, avg;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    avg = sum/n;
    cout << sum << " " << avg << endl;
    return 0;
}
