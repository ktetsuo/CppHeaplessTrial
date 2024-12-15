#include <etl/vector.h>
#include <iostream>

int main()
{
    etl::vector<int, 5> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
    myVector.push_back(3);
    myVector.push_back(4);
    myVector.push_back(5);

    for(int i : myVector)
    {
        std::cout << i << std::endl;
    }
    return 0;
}
