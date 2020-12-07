#include<iostream>
using namespace std;
int main()
{
	float x1, x2, sum, dif, pro, div;
	printf("enter x1");
	scanf_s("%f", &x1);
	printf("enter x2");
	scanf_s("%f", &x2);
	sum = x1 + x2;
	dif = x1 - x2;
	pro = x1 * x2;
	div = x1 / x2;
	printf("sum=%f,div=%f,pro=%f,dif=%f", sum, div, pro, dif);
	return(0);
}
