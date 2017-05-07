#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i, j, m, n, cnt;
    scanf("%d %d",&n,&m);

    for(i=0,cnt=0;i<n;i++){
        for(j=0;j<=m;j++){
            cnt++;
        }
    }

    printf("%d\n",cnt);

    return 0;
}

