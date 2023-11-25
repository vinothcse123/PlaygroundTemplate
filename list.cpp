#include<iostream>
#include<list>
#include<memory>


int main()
{
	std::list<int> myList;
    ;
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    myList.remove(2);
 
    for(auto val : myList)
    {
        std::cout << " ==============V6P: Key "<<  val  << "==================" << std::endl;

    }

	return 0;
}
