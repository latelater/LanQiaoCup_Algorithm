//6+8/3+952/714 ����һ�ֽⷨ��
//5+3/1+972/486 ����һ�ֽⷨ��

//��ҪΪ�˿�int�ͺ�double֮��ļ��㣬�Լ�float��int

#include<iostream>
#include<typeinfo>
using namespace std;

int main(){
int i;
i = 6 + (8 + 0.0)/3 + (952 + 0.0)/714;
//i = 2 + 0.0;
//
//if(typeid(i) == typeid(float)) cout<<"float"<<endl;
//else
//    if(typeid(i) == typeid(double)) cout<<"double"<<endl;
//        else
//            if(typeid(i) == typeid(int)) cout<<"int"<<endl;
if(typeid(i) == typeid(int)) cout<<"int"<<endl;
//cout<<i;
float x = 11.20;

int y = (int)x;
int z = (int)(100 * (x - y));
cout<<z;

return 0;
}
