//shoes2.c --计算多个不同鞋码对应的脚长
#include<stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;//const 变量
	double shoe, foot;

	printf("Shoe size (men's) foot length\n");
	shoe = 2.0;
	while (++shoe <18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f inches\n",shoe,foot);
	}			//块结束
	printf("If the shoe fits,wear it.\n");

	return 0 ;


}
