//问题描述
//　　给定n个十六进制正整数，输出它们对应的八进制数。
//
//输入格式
//　　输入的第一行为一个正整数n （1<=n<=10）。
//　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。
//
//输出格式
//　　输出n行，每行为输入对应的八进制正整数。
//
//　　【注意】
//　　输入的十六进制数不会有前导0，比如012A。
//　　输出的八进制数也不能有前导0。
//
//样例输入
//　　2
//　　39
//　　123ABC
//
//样例输出
//　　71
//　　4435274
//
//　　【提示】
//　　先将十六进制数转换成十进制数，再由某进制数转换成八进制。

#include<iostream>
#include<math.h>
using namespace std;


int size(char *p)//检测输入16进制的长度
{
	int n=0;
	while(*(p)!='\0')
	{
		p++;
		n++;
	}
	return n;
}

long long swap16(char *arr, int n){
    int a, j = 0;
    long long q = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] >= '0' && arr[i] <= '9'){
            a = arr[i] - '0';
            q += a * pow(16, j);
        }

        if(arr[i] >= 'A' && arr[i] <= 'F'){
            a = arr[i] - 'A' + 10;
            q += a * pow(16, j);
        }
        j++;
    }


    return q;
}


void swap(int x){
    int *arr1;
    arr1 = new int[8];
    if(x == 0) cout<<0;//此处为当x = 0时的处理
    int a, i = 0;
    char b;
    while(x >= 1){
        b = x%8;
        x = x/8;
        arr1[i] = b;
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        cout<<arr1[j];
    }
}

int main(){
    int n;
    cin>>n;
    for(int i= 0; i < n; i++){
        char *arr;
        int len, x;
        arr = new char[8];
        cin >> arr;//输入16进制
        len = size(arr);
        x = swap16(arr, len);//转化成10进制
        swap(x);//转化成8进制
    }

    return 0;
}
