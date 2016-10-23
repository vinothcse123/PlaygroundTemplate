#include<iostream>
#include<array>

class Fruit
{
	public:
		virtual void getColour()=0;
};

class Apple : public Fruit
{
	private:
		virtual void getColour()
		{
			std::cout<<"My Colour is red"<<std::endl;
		}
};

int main()
{
	Fruit *anyFruitPtr=new Apple;
	anyFruitPtr->getColour();
	return 0;
}