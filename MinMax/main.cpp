//问题描述
//给出n个数，找出这n个数的最大值，最小值，和。
//
//输入格式
//第一行为整数n，表示数的个数。
//
//第二行有n个数，为给定的n个数，每个数的绝对值都小于10000。
//
//输出格式
//输出三行，每行一个整数。第一行表示这些数中的最大值，第二行表示这些数中的最小值，第三行表示这些数的和。
//样例输入
//5
//1 3 -2 4 5
//样例输出
//5
//-2
//11
//数据规模与约定
//1 <= n <= 10000。

#include<iostream>
using namespace std;

void MinMax(int n, int *arr){
    int t = arr[0], sum = 0;//最大值的初始化为数组第0个
    for(int i = 0; i < n; i++){//Max
        if(arr[i] > t){
            t = arr[i];
        }
        sum += arr[i];
    }

    int x = arr[0];//最小值的初始化为数组第0个
    for(int i = 0; i < n; i++){//Min
        if(arr[i] < x){
            x = arr[i];
        }
    }

    cout<<t<<endl;
    cout<<x<<endl;
    cout<<sum<<endl;
}

int main(){
    int n;
    cin>>n;
    int *arr;
    arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    MinMax(n, arr);
    return 0;
}
