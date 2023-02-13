#include <iostream>
#define SPRING 1
#define SUMMER 2
#define AUTUMN 3
#define WINTER 4

#define SEASON SPRING

#if SEASON == SPRING
int main()
{
    std::cout << "Spring!\n";
}
#elif SEASON == SUMMER
int main()
{
    std::cout << "Summer!\n";
}
#elif SEASON == AUTUMN
int main()
{
    std::cout << "Autumn!\n";
}
#elif SEASON == WINTER
int main()
{
    std::cout << "Winter!\n";
}
#endif