#include <iostream>

int main()
{
    int n, i;
    
    std::cin >> n;
    
    for(i = 0; n != 1; ++i) {
        n = (n%2==0?n:3*n+1)/2;
    }
    std::cout << i << std::endl;
}
