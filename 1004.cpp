#include <iostream>

using namespace std;

class student {
    public:
        student(int i):score(i){}
    
    public:
        string name;
        string sid;
        unsigned int score;
};

int main()
{
    student top(0), low(999), tmp(0);
    int num;
    
    cin >> num;
    
    for(int i = 0; i < num; ++i) {
        cin >> tmp.name >> tmp.sid >> tmp.score;
        if(tmp.score > top.score) top = tmp;
        if(tmp.score < low.score) low = tmp;
    }
    
    cout << top.name << ' ' << top.sid << endl;
    cout << low.name << ' ' << low.sid << endl;
}
