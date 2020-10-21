#include<iostream>


class BaseClass
{
	
	public:
		BaseClass()
		{
			std::cout<<"BaseClass constructor called"<<std::endl;
		}
};

class DerivedClass : public BaseClass
{
	
	public:
		DerivedClass()
		{
			std::cout<<"DerivedClass constructor called"<<std::endl;
		}
};

int main()
{
	
	return 0;
}
