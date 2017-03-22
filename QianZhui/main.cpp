//
//问题描述
//　　编写一个程序，以字符串方式输入一个前缀表达式，然后计算它的值。输入格式为：“运算符 对象1 对象2”，
//其中，运算符为“+”（加法）、“-”（减法）、“*”（乘法）或“/”（除法），运算对象为不超过10的整数，它们之间用一个空格隔开。
//要求：对于加、减、乘、除这四种运算，分别设计相应的函数来实现。
//　　输入格式：输入只有一行，即一个前缀表达式字符串。
//　　输出格式：输出相应的计算结果（如果是除法，直接采用c语言的“/”运算符，结果为整数）。
//　　输入输出样例
//样例输入
//+ 5 2
//样例输出
//7

//*42,+43,-45,/47

#include <iostream>

using namespace std;

int pplus(int a, int b){
    return a+b;
}

int mmul(int a, int b){
    return a*b;
}

int ssub(int a, int b){
    return a-b;
}

int ddiv(int a, int b){
    return a/b;
}

int main()
{

    int a = 0, b = 0;
    char c = '+';
    char *arr = new char[10];
    int i = 0;
    cin >> arr[0];
    while(arr[i] > 13){//回车和换行的ascii码一个10 一个13
        i++;
        cin >> arr[i];

    }
//    cin >> c;
//    cin >> a >> b;


    if(c == '*') cout << mmul(a, b);
    if(c == '+') cout << pplus(a ,b);
    if(c == '-') cout << ssub(a, b);
    if(c == '/' && b != 0) cout << ddiv(a, b);

    return 0;
}
