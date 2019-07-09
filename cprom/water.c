/*water.c --计算水分子个数*/
#include <stdio.h>
int main(void)
{
	float water;
	float gwater;
	water = 3.156e-23;
	printf("\aEnter water夸克:");
	printf(" ________\b\b\b\b\b\b\b\b");
	scanf ("%f",&gwater);
	printf("\n\t    $%.2f 夸水 是 $%.2f个水分子 .",gwater,(gwater * 950)/water );
	printf("\rGee!\n");
	
	return 0;
}
