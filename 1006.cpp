#include <iostream>

using namespace std;

int main()
{
    int num;
    int b, s, g;
    
    cin >> num;
    
    b = num / 100;
    s = (num / 10) % 10;
    g = num % 10;
    
    while(b-- > 0) cout << "B";
    while(s-- > 0) cout << "S";
    for(int i = 1; i <= g; ++i)
        cout << i;
}
