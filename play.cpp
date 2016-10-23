#include<iostream>
#include<array>

class Fruit
{
	public:
		virtual void getColour()const
		{
			std::cout<<"My Colour is Fruit"<<std::endl;
		}
};

class Apple : public Fruit
{
	private:
		virtual void getColour() // This is not override function, Note missing const. 
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