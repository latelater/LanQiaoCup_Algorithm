//问题描述
//　　给两组数，各n个。
//　　请调整每组数的排列顺序，使得两组数据相同下标元素对应相乘，然后相加的和最小。要求程序输出这个最小值。
//　　例如两组数分别为:1 3　　-5和-2 4 1
//
//　　那么对应乘积取和的最小值应为：
//　　(-5) * 4 + 3 * (-2) + 1 * 1 = -25
//输入格式
//　　第一个行一个数T表示数据组数。后面每组数据，先读入一个n，接下来两行每行n个数，每个数的绝对值小于等于1000。
//　　n<=8,T<=1000
//输出格式
//　　一个数表示答案。
//样例输入
//2
//3
//1 3 -5
//-2 4 1
//5
//1 2 3 4 5
//1 0 1 0 1
//
//样例输出
//
//
//-25
//6

//解法：将第一组从小到大排序，第二组从大到小排序再将对应下标相乘。

#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort1(int n, int *arr){  //从小到大
    bool temp = 0;
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = n-1; j > i; j--){
            if(arr[j] < arr[j-1]){
                swap(&arr[j-1], &arr[j]);
                temp = 1;
            }
        }
        if(temp == 0) break;
    }
}

void sort2(int n, int *arr){ //从大到小
    bool temp = 0;
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = n-1; j > i; j--){
            if(arr[j] > arr[j-1]){
                swap(&arr[j-1], &arr[j]);
                temp = 1;
            }
        }
        if(temp == 0) break;
    }
}

int main()
{
    int N, n;
    cin >> N;

    int *sum = new int[N];
    for(int j = 0; j < N; j++){
        cin >> n;
        sum[j] = 0;
        int *arr1 = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        int *arr2 = new int[n];
        for(int i = 0; i < n; i++){
            cin >> arr2[i];
        }
        sort1(n, arr1);
        sort2(n, arr2);
        for(int i = 0; i < n; i++){
            sum[j] += arr1[i] * arr2[i];
        }
        delete []arr1;
        delete []arr2;
    }

    for(int i = 0; i < N; i++){
        cout << sum[i] <<endl;
    }
    return 0;
}
