

//问题描述
//　　给定一个长度为n的字符串S，还有一个数字L，统计长度大于等于L的出现次数最多的子串（不同的出现可以相交），
//如果有多个，输出最长的，如果仍然有多个，输出第一次出现最早的。
//输入格式
//　　第一行一个数字L。
//　　第二行是字符串S。
//　　L大于0，且不超过S的长度。
//输出格式
//　　一行，题目要求的字符串。
//
//　　输入样例1：
//　　4
//　　bbaabbaaaaa
//
//　　输出样例1：
//　　bbaa
//
//　　输入样例2：
//　　2
//　　bbaabbaaaaa
//
//　　输出样例2：
//　　aa
//数据规模和约定
//　　n<=60
//　　S中所有字符都是小写英文字母。
//提示
//　　枚举所有可能的子串，统计出现次数，找出符合条件的那个


#include <iostream>

using namespace std;

int main()
{
    char *arr = new char[60];

    int temp = 1, t, len = 0, s; //temp统计出现的最多次数; t统计每一个次数

    cin >> s;
    cin >> arr;
    while(arr[len] > 89){
        len++;
    }

    char *str = new char[60];
    char *p = new char[60] ();
    for(int i = 0; i < len-s+1; i++){
        int t = 0, c = 0;
        for(int j = i; j < s+i; j++){
            str[j-i] = arr[j];
//            cout << arr[j];
        }
//        cout << endl;
//        cout << str <<endl;
        for(int j = 0; j < len-s+1; j++){
            c = 0;
            for(int k = 0; k < s; k++){
                if(str[k] == arr[j+k]){
                    c++;
                }
            }
//            cout << c <<" ";
            if(c == s) t++;

        }
//        cout << endl;

        if(t > temp){
            temp = t;
            for(int x = 0; x < s; x++){
                p[x] = str[x];
            }
        }
    }
    cout << p;

    return 0;
}
