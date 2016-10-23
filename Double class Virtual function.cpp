#include<iostream>
#include<array>

class Fruit
{
	public:
		virtual void getColour()=0;
};

class Apple : public Fruit
{
	public:
		virtual void getColour()
		{
			std::cout<<"My Colour is red"<<std::endl;
		}
};

class Mango : public Fruit
{
	public:
		virtual void getColour()
		{
			std::cout<<"My Colour is Yellow"<<std::endl;
		}
};

int main()
{
	std::array<Fruit*,2> fruitsPtr;
	fruitsPtr[0] = new Apple;
	fruitsPtr[1] = new Mango;
	
	
	for(auto anyFruitPtr:fruitsPtr)
	{
		anyFruitPtr->getColour();
	}
		
	return 0;
}