#include <stdio.h>///7��0,�d�U
int a[10000000]={0,0,0,0  };///0:�w���A1��

int main()
{
    int ans=0;
    for(int i=2;i<10000000; i++){
        if(a[1]==0){
            ans++;

            for(int k=i+i; k<10000000; k=k+i)
                a[k]=1;
        }


    }
printf(" Ans: %d", ans);


}

