//生日蜡烛
//
//某君从某年开始每年都举办一次生日party，并且每次都要吹熄与年龄相同根数的蜡烛。
//
//现在算起来，他一共吹熄了236根蜡烛。
//
//请问，他从多少岁开始过生日party的？


#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for(int j = 1; j < 100; j++){
        sum = 0;
        for(int i = j; i < 100; i++){
            sum += i;
            if(sum == 236){
                cout<<j<<" "<<i<<" "<<sum;
                break;
            }
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
