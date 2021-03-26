#include<iostream>

class MyClass
{
	private:
		bool m_myBool=false;
		
	public:
		MyClass()
		{
			std::cout<<"MyClass constructor called"<<std::endl;
			m_myBool=false;
		}
		
		~MyClass()
		{
			std::cout<<"MyClass destructor called"<<std::endl;
		}
};

int main()
{
	
	return 0;
}
