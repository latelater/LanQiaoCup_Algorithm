//问题描述
//　　给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1<=n<=200
//输入格式
//　　第一行为一个整数n。
//　　第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000。
//输出格式
//　　输出一行，按从小到大的顺序输出排序后的数列。
//样例输入
//5
//8 3 6 4 9
//样例输出
//3 4 6 8 9

/*冒泡排序：
eg：7 9 0 5 1
*/

/*
申请n个空间
 int *array; array=new int[10];
*/

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void sort(int p[], int n){

    bool temp; //设置变量，如果上次循环没有交换则停止排序
    for(int i = 0; i < n; i++){
        temp = 0;
        for(int j = n-1; j > i; j--){
            if(p[j] < p[j-1]){
                temp = 1;
                swap(&p[j], &p[j-1]);
            }
        }

        if(temp == 0) break;
    }

    for(int i = 0; i < n; i++){
        cout << p[i] <<" ";
    }

}

int main(){
    int n, *p;
    cin >> n;
    p = new int[n];
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p, n);
    return 0;
}
