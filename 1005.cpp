#include <iostream>
#include <map>

using namespace std;

void getlist(map<int,bool> &m)
{
    int num;
    
    cin >> num;
    if(m.find(num) == m.end())
        m[num] = true;
    else
        return;
    
    while(num != 1) {
        num = (num%2==0?num:3*num+1)/2;
        m[num] = false;
    }
}

int main()
{
    int num;
    bool blank = false;
    map<int,bool> callatz;
    
    cin >> num;
    for(int i = 0; i < num; ++i)
        getlist(callatz);
    
    for(auto it = callatz.rbegin(); it != callatz.rend(); ++it)
        if(it->second == true) {
            if(!blank) blank = true;
            else cout << " ";
            cout << it->first;
        }
}
