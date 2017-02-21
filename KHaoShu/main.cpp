//问题描述
//如果一个自然数N的K进制表示中任意的相邻的两位都不是相邻的数字，那么我们就说这个数是K好数。求L位K进制数中K好数的数目。例如K = 4，L = 2的时候，
//所有K好数为11、13、20、22、30、31、33 共7个。由于这个数目很大，请你输出它对1000000007取模后的值。
//
//输入格式
//输入包含两个正整数，K和L。
//
//输出格式
//输出一个整数，表示答案对1000 0000 07取模后的值。
//样例输入
//4 2
//样例输出
//7
//数据规模与约定
//对于30%的数据，KL <= 106；
//
//对于50%的数据，K <= 16， L <= 10；
//
//对于100%的数据，1 <= K,L <= 100。


//解法：1.对于首位不为0；2.对于Q = k-1，下一位有k-1种可能；3.对于Q = 0，也有k-1种可能；4.对于其他，均有k-2种可能；


#include <iostream>

using namespace std;

const int DATA = 1000000007;

int Every(int Q,int K){
    if(Q == K-1) return 1;
    else
        if(Q == 0) return 0;
        else
            return -1;

}

int main()
{
    int K, L, sum, t;//t为判断Q的 -1 0 +1, sum为最终输出结果，temp/DATA
    long long temp = 1;//总数
    cin>>K; //进制
    cin>>L; //位数
    for(int i = L; i >= 1; i--){
//        temp = K-1;
        if(i == 1){

            for(int j = 1; j < K; j++){
                t = Every(j, K);
                if(t == 1 || t == 0){
                    temp = temp*(K-1);
                }
                else
                    temp = temp*(K-2);
            }

        }
        else
            for(int j = 0; j < K; j++){
                t = Every(j, K);
                if(t == 1 || t == 0){
                    temp = temp*(K-1);
                }
                else
                    temp = temp*(K-2);
            }
    }

    cout<<temp<<endl;

    return 0;
}
