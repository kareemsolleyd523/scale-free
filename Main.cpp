#include <bits/stdc++.h>
//#include "Node.h"
using namespace std;

int main ()
{
    int i, j, Node_Num=0, Link_Sum=0, Link_Now=0, Rand;
    cin >> Node_Num;
    int Num[Node_Num]={0};
    Num[0] = 2;
    for (i=1, Link_Sum=2; i<=Node_Num-2; i++, Link_Sum+=2)
    {
        Link_Now=0;
        Rand = rand();
        for (j=0; j<i; j++)
        {
            Link_Now += (j+1)*Num[j];
            if (Rand%Link_Sum<=Link_Now)
            {
                Num[j]--;
                Num[j+1]++;
                break;
            }
        }
        Num[0]++;
    }
    for (i=0; i<pow(Node_Num,0.5); i++)
    {
        cout << "含有" << i+1 << "个链接的结点数为：" << Num[i] << endl;
    }
    return 0;
}
