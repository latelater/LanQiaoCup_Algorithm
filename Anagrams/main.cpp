//
//问题描述
//　　Anagrams指的是具有如下特性的两个单词：在这两个单词当中，每一个英文字母（不区分大小写）所出现的次数都是相同的。
//例如，“Unclear”和“Nuclear”、“Rimon”和“MinOR”都是Anagrams。编写一个程序，输入两个单词，然后判断一下，
//这两个单词是否是Anagrams。每一个单词的长度不会超过80个字符，而且是大小写无关的。
//　　输入格式：输入有两行，分别为两个单词。
//　　输出格式：输出只有一个字母Y或N，分别表示Yes和No。
//　　输入输出样例
//样例输入
//Unclear
//Nuclear
//样例输出
//Y

//按照a-z的顺序将26个字母出现的顺序分别存入数组，再比较两个数组相同不

#include <iostream>

using namespace std;

void Str(char *arr, int *p){
    int len = 0, t;
    while(arr[len] >= 65 && arr[len] <= 122){
        len++;
    }
    for(int i = 0; i < 26; i++){
        p[i] = 0;
    }
    for(int i = 0; i < len; i++){
        if(arr[i] >= 97){
            t = arr[i] - 97;
            p[t]++;
        }
        if(arr[i] >= 65 && arr[i] <= 90){
            t = arr[i] - 65;
            p[t]++;
        }
    }

}

int main()
{
    char *arr1 = new char[80];
    char *arr2 = new char[80];
    int *p1 = new int[26];
    int *p2 = new int[26];
    int i = 0;
    cin >> arr1;
    cin >> arr2;
    Str(arr1, p1);
    Str(arr2, p2);
    while(p1[i] == p2[i]){
        i++;
    }
    if(i == 26){
        cout << "Y";
    }
    else
        cout << "N";
    return 0;
}
