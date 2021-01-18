#include<iostream>


class BaseClass
{
	
	public:
		BaseClass()
		{
			std::cout<<"BaseClass constructor called"<<std::endl;
		}
	
	virtual void myVirtualFunc()
	{
		std::cout << "BaseClass virtual function" <<'\n';
	}
};

class DerivedClass : public BaseClass
{
	
	public:
		DerivedClass()
		{
			std::cout<<"DerivedClass constructor called"<<std::endl;
		}
		
		virtual void myVirtualFunc()
	{
		std::cout << "DerivedClass virtual function" <<'\n';
	}
};

int main()
{
	int64_t result=-1;
	
	std::cout << "Result" << result <<'\n';

	
	return 0;
}
