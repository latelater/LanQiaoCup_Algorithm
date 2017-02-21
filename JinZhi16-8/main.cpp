//问题描述
//　　从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
//　　注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
//样例输入
//FFFF
//样例输出
//65535

//
//    cout << "long long: \t\t" << "所占字节数：" << sizeof(long long);
//    cout << "\t最大值：" << (numeric_limits<long long>::max)();
//    cout << "\t最小值：" << (numeric_limits<long long>::min)() << endl;

#include<iostream>
#include<math.h>
using namespace std;

int size(char *p)
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

int main(){
    char *arr;
    int n;
    arr = new char[8];
    cin >> arr;
    n = size(arr);
    cout << swap16(arr, n);
    return 0;
}



