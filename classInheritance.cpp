#include<iostream>
#include<string>
#include<vector>

using std::vector;
using std::cout;
using std::string;

class BaseClass
{
    public:
        BaseClass()
        {

        }

        ~BaseClass()
        {

        }

        void myFunction()
        {

        }

};

class DerivedClass : public BaseClass
{
    public:

    DerivedClass()
    {

    }

    void myFunction()
    {

    }
};

int main()
{
    int myNumber=-1;


    cout<< "Result :" << myNumber << '\n';
	
	return 0;
}
