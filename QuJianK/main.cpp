//��������
//����һ�����У�ÿ��ѯ�������е�l��������r�����е�K��������ĸ���
//
//�����ʽ
//��һ�а���һ����n����ʾ���г��ȡ�
//
//�ڶ��а���n������������ʾ���������С�
//
//����������һ��������m����ʾѯ�ʸ�����
//
//������m�У�ÿ��������l,r,K����ʾѯ�����д������ҵ�l��������r�����У��Ӵ���С��K��������ĸ�������Ԫ�ش�1��ʼ��š�
//
//�����ʽ
//�ܹ����m�У�ÿ��һ��������ʾѯ�ʵĴ𰸡�
//��������
//5
//1 2 3 4 5
//2
//1 5 2 l r k
//2 3 2
//�������
//4
//2
//���ݹ�ģ��Լ��
//����30%�����ݣ�n,m<=100��
//
//����100%�����ݣ�n,m<=1000��
//
//��֤k<=(r-l+1)�������е���<=106��


#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}


int MaxMin(int n, int *arr, int l, int r, int k){
//    int *p;
//    p = new int[q];
//    for(int i = 0; i < q; i++){

    int *arr1;
    arr1 = new int[r-l];
    int t = 0;
    for(int j = l-1; j < r; j++){
        arr1[j-l+1] = arr[j];
    }
//    cout<<"�������ǰ�����";
//    for(int i = 0; i < r-l+1; i++){
//        cout<<arr1[i]<<" ";
//    }
//    cout<<endl;

    for(int i = 0; i < r-l+1; i++){
        for(int j = r-l; j > i; j--){
            if(arr1[j-1] < arr1[j]){
//                t = arr1[j+1];
//                arr1[j+1] = arr1[j];
//                arr1[j] = t;
                swap(&arr1[j], &arr1[j-1]);
            }
        }
    }
//    cout<<"������������";
//    for(int i = 0; i < r-l+1; i++){
//        cout<<arr1[i]<<" ";
//    }
//    cout<<endl;
//    cout<<arr1[k-1]<<endl;
    return arr1[k-1];
//    delete []arr1;
//    }

}

int main()
{
    int n, q, l, r, k, *arr, *p;
    cin>>n;
    arr = new int[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cin>>q;
    p = new int[q];
    for(int i = 0; i < q; i++){
        cin>>l>>r>>k;
        p[i] = MaxMin(n, arr, l, r, k);
    }

    for(int i = 0; i < q; i++){
        cout<<p[i]<<endl;
    }

//    cout << "Hello world!" << endl;
    return 0;
}
