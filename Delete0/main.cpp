//�Ӽ��̶���n���������������У���д����CompactIntegers��ɾ������������ֵΪ0��Ԫ�أ����Ԫ���������׶��ƶ���
//ע�⣬CompactIntegers������Ҫ�������鼰��Ԫ�ظ�����Ϊ��������������ֵӦΪɾ������ִ�к��������Ԫ�ظ�����
//���ɾ����������Ԫ�صĸ����������������Ԫ�ء�
//��������: �������ʽ˵����5Ϊ�������ݵĸ�����3 4 0 0 2 ���Կո������5��������
//5
//3 4 0 0 2
//�������:�������ʽ˵����3Ϊ�������ݵĸ�����3 4 2 ���Կո������3������������
//3
//3 4 2
//��������:
//7
//0 0 7 0 0 9 0
//�������:
//2
//7 9
//��������:
//3
//0 0 0
//�������:
//0


#include <iostream>

int CompactIntegers(int n, int *arr){
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){

            for(int j = i; j < n-1; j++){
                arr[j+1] = arr[j];
            }
            n--;
            i--;
        }
    }
    return n;
}


using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    m = CompactIntegers(n, arr);

    cout << m <<endl;
    for(int i = 0; i < m; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}
