#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b)
{

    return a *  b;

}

int main()
{
    std::cout << "The sum is " << add(10 , 10) << std::endl;
    return 0;
}
