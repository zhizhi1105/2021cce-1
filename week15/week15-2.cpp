///大除中 得小, 中除小
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int c=a%b;
    while(c!=0){
        a=b;
        b=c;
        c=a%b;
}
printf("%d",b);
}
