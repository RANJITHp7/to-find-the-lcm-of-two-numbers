#include<stdio.h>
int lcm(int c,int d,int m)//c,d are parametrs given in the function
{
    m=m+d;
	if(m%c==0 && m%d==0)
	      return m;
    return lcm(c,d,m);
}
			
int main(){
	int a,b,m=0;
	printf("first input number:");//first number to find the lcm
	scanf("%d",&a);
	printf("second input number:");//second number to find the lcm
	scanf("%d",&b);
	printf("LCM of %d and %d = %d",a,b,lcm(a,b,m));
	return 0;
}

			        