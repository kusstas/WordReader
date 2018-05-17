#include "session.h"
#include <iostream>

int main()
{
    Session session("test.txt");
    session.execute();
    std::cout << "result: " << session.result() << std::endl;
    return 0;
}
