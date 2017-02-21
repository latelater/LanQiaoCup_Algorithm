//问题描述
//给定一个序列，每次询问序列中第l个数到第r个数中第K大的数是哪个。
//
//输入格式
//第一行包含一个数n，表示序列长度。
//
//第二行包含n个正整数，表示给定的序列。
//
//第三个包含一个正整数m，表示询问个数。
//
//接下来m行，每行三个数l,r,K，表示询问序列从左往右第l个数到第r个数中，从大往小第K大的数是哪个。序列元素从1开始标号。
//
//输出格式
//总共输出m行，每行一个数，表示询问的答案。
//样例输入
//5
//1 2 3 4 5
//2
//1 5 2 l r k
//2 3 2
//样例输出
//4
//2
//数据规模与约定
//对于30%的数据，n,m<=100；
//
//对于100%的数据，n,m<=1000；
//
//保证k<=(r-l+1)，序列中的数<=106。


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
//    cout<<"输出排序前结果：";
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
//    cout<<"输出排序后结果：";
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
