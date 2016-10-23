#include<iostream>

class ArrayNotFound
{
	public:
	
		ArrayNotFound()
		{			
		}
		
		ArrayNotFound(const ArrayNotFound& obj)
		{
			std::cout<<"CC"<<std::endl;
		}
};

int main()
{
	ArrayNotFound obj1;
	ArrayNotFound obj2=obj1;
	
	
	return 0;
}