#include<iostream>
#include<list>
#include<memory>

class CacheNode
{
	public:
		int id;
	
	CacheNode(int inpId): id(inpId) {}
};

int main()
{
	std::list<std::shared_ptr<CacheNode>> cacheQueue;
    ;
    cacheQueue.push_back(std::make_shared<CacheNode>(1));
    cacheQueue.push_back(std::make_shared<CacheNode>(2));
    cacheQueue.push_back(std::make_shared<CacheNode>(3));

	return 0;
}
