//问题描述
//　　123321是一个非常特殊的数，它从左边读和从右边读是一样的。
//　　输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
//输入格式
//　　输入一行，包含一个正整数n。
//输出格式
//　　按从小到大的顺序输出满足条件的整数，每个整数占一行。
//样例输入
//52
//样例输出
//899998
//989989
//998899
//数据规模和约定
//　　1<=n<=54。

#include<iostream>
using namespace std;

void add6(int x){
    for(int i = 1; i < 10 && i <= x/2; i++){
        for(int j = 0; j < 10 && j <= x/2; j++){
            for(int k = 0; k < 10 && k <= x/2; k++){
                if(2*i+2*j+2*k == x){
                    cout <<i<<j<<k<<k<<j<<i<<endl;
                }
            }
        }
    }
}

void add5(int x){
    for(int i = 1; i < x && i < 10; i++){//需是整数，所以从1开始
        for(int j = 0; j < x && j < 10; j++){
            for(int k = 0; k < x && k < 10; k++){
                if(2*i+2*j+k == x){
                    cout <<i<<j<<k<<j<<i<<endl;
                }
            }
        }
    }
}

int main(){
    int x;
    cin>>x;
    add5(x);
    add6(x);
    return 0;
}
