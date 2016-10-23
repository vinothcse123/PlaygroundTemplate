#include<iostream>

class ArrayNotFound
{
	public:
		void callme()
		{
			std::cout<<"A"<<std::endl;
		}
};

int main()
{
	ArrayNotFound obj;
	obj.callme();
	
	return 0;
}