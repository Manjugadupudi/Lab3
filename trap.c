#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415926535
int main(int argc,char **argv){
	double x1,ul=1,ll=-1;
	int i=0;
	double y=0;
	int N=atoi(argv[1]);
	double n=N;
	x1=(ul-ll)/N;
//	printf("%f",x1);
	for(double a=-1;a<=1;a=a+x1)
	{
//	printf("%f\n",a);
	if(a==-1||a==1)
        y+=(1/(1+(a*a)));
        else
        y+=(2/(1+(a*a)));
        
	} 

	printf("%d %lf",N,(PI/2)-(x1*y/2));
        printf("\n");
return 0;

}
