#include <iostream>
#include <cmath>

using namespace std;

bool prime(int num)
{   
    if(num==1)
        return false;
    
    for(int i = 2; i <= static_cast<int>(sqrt(num)); ++i)
        if(num % i == 0)
            return false;

    return true;    
}

int main()
{
    int num;
    int count = 0;
    
    cin >> num;
    
    for(int i = 2; i < num-1; ++i)
        if(prime(i) && prime(i+2))
            count++;
            
    cout << count << endl;
}
