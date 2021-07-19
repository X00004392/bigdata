#include<stdio.h>
#include<math.h>
int main()

//把一个三位的数字，输出它的个位数，十位数、百位数。

{	int a,b,c,m;
	m=321;
	a=m%10;	//个位
	b=(m/10)%10;		//十位
	c=m/100;			//百位
		printf("%d%d%d\n",a,b,c);//输出个、十、百

	return 0;
}

