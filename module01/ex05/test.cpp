#include<iostream>
void test(void)
{
    std::cout << "lksjdf"<<std::endl;
}

class Test
{

public:
    int x;
    void debug();
    void fff();
    Test();
    ~Test();
};

void    Test::debug() {
    std::cout << "Test::debug()" << std::endl;
}

void Test::fff() {
    std::cout << "Test::fff()" << std::endl;

}

Test::Test()
{
}

Test::~Test()
{
}


int main()
{

    int Test::*ptr_x = &Test::x;

    void (Test::*ptr_deb) (void) = &Test::debug;

    Test test;

    test.*ptr_x = 20;

    test.*ptr_deb = &Test::fff;

    // std::cout <<  << std::endl;
    

}