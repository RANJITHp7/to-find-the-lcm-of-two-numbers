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
	printf("enter the first number:");//first number to find the lcm
	scanf("%d",&a);
	printf("enter the first number:");//second number to find the lcm
	scanf("%d",&b);
	printf("LCM of the  two numbers is %d",lcm(a,b,m));
	return 0;
}

			        