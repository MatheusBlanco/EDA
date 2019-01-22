#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
#define N 100000

using namespace std;

int main()
{
    int ara[N];
    int tc;

        while(scanf("%d",&tc)==1){

            for(int i=0;i<tc;i++){
                    scanf("%d",&ara[i]);
            }

            sort(ara,ara+tc);

            for(int j=0;j<tc;j++){
                    if(ara[j]%2==0)
                    printf("%d\n",ara[j]);
            }

                for(int j=tc-1;j>=0;--j){
                    if(ara[j]%2==1)
                        printf("%d\n",ara[j]);
                }

        } // end while


    return 0;
}
