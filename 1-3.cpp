#include <stdio.h>
void translate(int upper,int lower,int step);
int main(){
	int step=0,upper=0,lower=0;
	printf("�밴�������¶�ת�������ޡ����ޡ�����(��ʽ��\"300 0 10\"):\n");
	scanf("%d %d %d",&upper,&lower,&step);
	translate(upper,lower,step);
	return 0;
}
void translate(int upper,int lower,int step)
{
	int c=0,f=0;
printf("��������ӡ���Ǵ�%d��%dÿ��%d�Ĵӻ����¶��������¶�ת����\n",lower,upper,step);
	for(f=lower;f<=upper;f+=step){
		c=5*(f-32)/9;
		printf("%6d %9d\n",f,c);
	}
}
