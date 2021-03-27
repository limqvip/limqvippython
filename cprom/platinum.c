#include<stdio.h>
/* platinum.c your weight in platinum */
int main(void)
{
	float weight;/*你的体重*/
	float value;/*相等重量白金价值*/
	printf("Are you worth you weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");
	/*获取o用户输入					*/
	scanf("%f",&weight);
	/*假设白金的价值是每盎司$1700					*/
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n",value);
	printf("You are easily worth that! If plaitinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	return 0;


}
