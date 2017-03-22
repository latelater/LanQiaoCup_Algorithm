//问题描述
//　　输入两个矩阵，分别是m*s，s*n大小。输出两个矩阵相乘的结果。
//输入格式
//　　第一行，空格隔开的三个正整数m,s,n（均不超过200）。
//　　接下来m行，每行s个空格隔开的整数，表示矩阵A（i，j）。
//　　接下来s行，每行n个空格隔开的整数，表示矩阵B（i，j）。
//输出格式
//　　m行，每行n个空格隔开的整数，输出相乘後的矩阵C（i，j）的值。
//样例输入
//2 3 2
//1 0 -1
//1 1 -3
//0 3
//1 2
//3 1
//样例输出
//-3 2
//-8 2
//
//提示
//矩阵C应该是m行n列，其中C(i,j)等于矩阵A第i行行向量与矩阵B第j列列向量的内积。
//例如样例中C(1,1)=(1,0,-1)*(0,1,3) = 1 * 0 +0*1+(-1)*3=-3


#include <iostream>

using namespace std;

int main()
{
    int m, s, n;
    cin >> m >> s >> n;
    int **arr1 = new int*[m];
    for(int i = 0; i < m; i++){
        arr1[i] = new int[s];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < s; j++){
            cin >> arr1[i][j];
        }
    }

    int **arr2 = new int*[s];
    for(int i = 0; i < s; i++){
        arr2[i] = new int[n];
    }
    for(int i = 0; i < s; i++){
        for(int j = 0; j < n; j++){
            cin >> arr2[i][j];
        }
    }

    int **p = new int*[m];
    for(int i = 0; i < m; i++){
        p[i] = new int[n];
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            p[i][j] = 0;
        }
    }

    for(int i = 0; i < m; i++){
        for(int k = 0; k < n; k++){
            for(int j = 0; j < s; j++){
                p[i][k] += arr1[i][j] * arr2[j][k];
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
