#include<stdio.h>
#include<math.h>  // abs() ����


int myAbs(int x)
{
	if (x < 0) 
	{ 
		return -x; 
	}
	else return x;
}

int main() {

	int value1, value2, value3;
	value1 = abs(-3);
	value2 = abs(+3);
	value3 = myAbs(-3);

	printf("���밪 : %d\n", value1);
	printf("���밪 : %d\n", value2);
	printf("���밪 : %d\n", value3);


	return 0;
}


