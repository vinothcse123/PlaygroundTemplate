#include<iostream>

template<typename T>
class ArrayNotFound
{
	private:
		T a;
		
	public:
		ArrayNotFound()
		{
			std::cout<<"ArrayNotFound constructor called"<<std::endl;
			learnSomethingNew=false;
		}
		
		~ArrayNotFound()
		{
			std::cout<<"ArrayNotFound destructor called"<<std::endl;
		}
};

int main()
{
	
	return 0;
}