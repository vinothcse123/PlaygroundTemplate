#include<iostream>


class Language
{
	
	public:
		Language()
		{
			std::cout<<"Language constructor called"<<std::endl;
		}
};

class cpp : public Language
{
	
	public:
		cpp()
		{
			std::cout<<"cpp constructor called"<<std::endl;
		}
};

int main()
{
	
	return 0;
}