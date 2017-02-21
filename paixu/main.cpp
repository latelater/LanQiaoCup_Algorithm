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

        if(temp == 1) break;
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
