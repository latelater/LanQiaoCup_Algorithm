//
//��������
//����Anagramsָ���Ǿ����������Ե��������ʣ������������ʵ��У�ÿһ��Ӣ����ĸ�������ִ�Сд�������ֵĴ���������ͬ�ġ�
//���磬��Unclear���͡�Nuclear������Rimon���͡�MinOR������Anagrams����дһ�����������������ʣ�Ȼ���ж�һ�£�
//�����������Ƿ���Anagrams��ÿһ�����ʵĳ��Ȳ��ᳬ��80���ַ��������Ǵ�Сд�޹صġ�
//���������ʽ�����������У��ֱ�Ϊ�������ʡ�
//���������ʽ�����ֻ��һ����ĸY��N���ֱ��ʾYes��No��
//���������������
//��������
//Unclear
//Nuclear
//�������
//Y

//����a-z��˳��26����ĸ���ֵ�˳��ֱ�������飬�ٱȽ�����������ͬ��

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
