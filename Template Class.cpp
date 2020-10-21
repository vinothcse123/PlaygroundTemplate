#include<iostream>

template<typename T>
class TemplateClass
{
	private:
		T a;
		
	public:
		TemplateClass()
		{
			std::cout<<"TemplateClass constructor called"<<std::endl;
			learnSomethingNew=false;
		}
		
		~TemplateClass()
		{
			std::cout<<"TemplateClass destructor called"<<std::endl;
		}
};

int main()
{
	
	return 0;
}
