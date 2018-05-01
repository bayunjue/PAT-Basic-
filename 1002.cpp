#include <iostream>
#include <string>

using namespace std;

const char *pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

void print(int value)
{
    if(value/10 == 0) cout << pinyin[value];
    else {
        print(value/10);
        cout << ' ' << pinyin[value%10];
    }
}

int main()
{
    int num = 0;
    string value;
    
    cin >> value;
    for(unsigned int i = 0; i < value.length(); ++i)
        num += value[i] - 48;

    print(num);
    cout << endl;
}
