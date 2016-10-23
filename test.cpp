#include<iostream>
int main()
{	
	int (*ptrToArray)[10][10];
	int *arrayOfPtr[10][10];
	std::cout<<sizeof(int[11][10])<<":"<<sizeof(*ptrToArray)<<":"<<sizeof(**ptrToArray)<<":"<<sizeof(arrayOfPtr)<<":"<<sizeof(*arrayOfPtr)<<":"<<sizeof(**arrayOfPtr);
	
	return 0;
}