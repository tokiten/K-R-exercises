#include <stdio.h>
void translate(int upper,int lower,int step);
int main(){
	int step=0,upper=0,lower=0;
	printf("请按序输入温度转换的上限、下限、步长(格式如\"300 0 10\"):\n");
	scanf("%d %d %d",&upper,&lower,&step);
	translate(upper,lower,step);
	return 0;
}
void translate(int upper,int lower,int step)
{
	int c=0,f=0;
printf("接下来打印的是从%d到%d每隔%d的从华氏温度向摄氏温度转换表\n",lower,upper,step);
	for(f=lower;f<=upper;f+=step){
		c=5*(f-32)/9;
		printf("%6d %9d\n",f,c);
	}
}
