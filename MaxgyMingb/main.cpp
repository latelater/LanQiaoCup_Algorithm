//问题描述
//已知一个正整数N，问从1~N中任选出三个数，他们的最小公倍数最大可以为多少。
//
//输入格式
//输入一个正整数N。
//
//输出格式
//输出一个整数，表示你找到的最小公倍数。
//样例输入
//9
//样例输出
//504
//数据规模与约定
//1 <= N <= 10^6。


//若是偶数,则： 若n与n-3不存在公因子3则：n*(n-1)*(n-3)，若存在公因子3，则：(n-1)*(n-2)*(n-3)
//若是奇数，则n*(n-1)*(n-2)

#include <iostream>
#include <math.h>

using namespace std;

bool JiOu(int N){
    if(N % 2 == 0){
        return 0;
    }
    else
        return 1;
}

int main()
{
    long long N; //需与M类型相同
    bool i;
    long long M;
    cin >> N;
    if(N == 1) M = 1;
    else
        if(N == 2) M = 2;
        else
            if(N >= 3){
                i = JiOu(N);
                if(i == 1){
                    M = N*(N-1)*(N-2);
                }
                else
                    if(N%3 == 0 && (N-3)%3 == 0){
                        M = (N-1)*(N-2)*(N-3);
                    }
                    else
                        M = N*(N-1)*(N-3);
            }
        cout << M;
    return 0;
}
