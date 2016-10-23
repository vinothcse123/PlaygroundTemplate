#include<iostream>

class ArrayNotFound
{
	public:
		void operator+(ArrayNotFound &p_operand)
		{
			std::cout<<"OP"<<":";
		}
};

int main()
{
	ArrayNotFound obj1,obj2;
	
	
	return 0;
}