#include<stdio.h>             //编译预处理指令
int main_3(void)                  //定义主函数
{                             //主函数开始
	int max(int x, int y);    //对被调用的函数max的声明
	int a, b, c;              //定义变量a，b，c
	scanf_s("%d,%d", &a, &b); //输入变量a，b的值
	c = max(a, b);            //调用max函数，并将得出的值赋给c
	printf("max=%d\n", c);    //输出结果
	return 0;                 //返回函数值为0
}                             //主函数结束
int max(int x, int y)         //定义max函数，函数值为整形，形式参数为x，y为整型
{
	int z;                    //max函数中的声明部分，定义本函数中所用的变量为整形
	if (x > y)z = x;          //若x>y则将x的值赋给z
	else z = y;               //若x>y不成立，则将y的值赋给z
	return(z);                //将z的函数值作为max函数值，返回给调用max函数的位置
}
