#include<iostream>


class Language
{
	
	public:
		void callme()
		{
			std::cout<<"A";
		}
};

class cpp : public Language
{
	
	public:
		void callme()
		{
			std::cout<<"B";
		}
};

int main()
{
	
	return 0;
}