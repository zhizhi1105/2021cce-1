#include <stdio.h>
int main()
{
 	int a, b, c;
 	int temp;
 	scanf("%d %d %d",&a, &b ,&c);

 	if(a>c){
 		temp=a;
 		a=c;
 		c=temp;
 	}

	if(b>c){
		temp=b;
		b=c;
 	    c=temp;
	}

}
