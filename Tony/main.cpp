//问题描述
//　　Torry从小喜爱数学。一天，老师告诉他，像2、3、5、7……这样的数叫做质数。Torry突然想到一个问题，
//前10、100、1000、10000……个质数的乘积是多少呢？他把这个问题告诉老师。老师愣住了，一时回答不出来。
//于是Torry求助于会编程的你，请你算出前n个质数的乘积。不过，考虑到你才接触编程不久，Torry只要你算出这个数模上50000的值。
//输入格式
//　　仅包含一个正整数n，其中n<=100000。
//输出格式
//　　输出一行，即前n个质数的乘积模50000的值。
//样例输入
//1
//
//样例输出
//
//
//2

//质数（prime number）又称素数，有无限个。质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数的数称为质数。



#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, sum = 0, m;
    cin >> n;
    for(int i = 2; i <= n; i++){
        m = sqrt(i);
        int j;
        for(j = 2; j <= m+1; j++){
            if(i%j == 0){
                break;
            }
        }
        if(j > m) sum++;

    }
//    int sum = 0;
//    cin >> n;
//    Max = m*m + 2*m;
//    for(int i = 2; i <= n; i++){
//
//        if(i > Max){
//            m++;
//            Max = m*m + 2*m;
//        }
//        int j;
//        for(j = 2; j <= m+1; j++){
//            if(i%j == 0) break;
//        }
//        if(j > m){
//            sum++;
//        }
//
//    }

    cout << sum <<endl;
    return 0;
}
