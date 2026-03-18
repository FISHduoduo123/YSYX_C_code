/*编写一个程序，定义两个类型和长度都相同的数组，将其中一个数组的所有元素拷贝给另一个。
既然数组不能直接赋值，想想应该怎么实现。*/
#include <stdio.h>
int main(void)
{
	int a[10], b[10];
    for(int i=0;i<10;i++) b[i] = a [i];
	return 0;
}

//用rand函数生成[10, 20]之间的随机整数，表达式应该怎么写？
#include <stdio.h>
#include <stdlib.h>
int rand_10_to_20(void)
{   
    int a;
    while(1) 
    {
        a = rand();
        if((a>=10)&&(a<=20))
        {
            return a;
        }
    }
}
int main(void)
{
    for(int i=0;i<10;i++) 
    {
        printf("Rand:%d\n",rand_10_to_20());
    }
	return 0;
}
