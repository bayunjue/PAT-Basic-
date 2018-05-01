#include <iostream>
#include <cstring>

using namespace std;

bool judge(const char *arr)
{
    int num_P = 0, num_T = 0;
    for(unsigned int i = 0; i < strlen(arr); ++i) {
        if(arr[i] == 'P') num_P++;
        else if(arr[i] == 'T') num_T++;
        else if(arr[i] != 'A') return false;
        if(num_P > 1 || num_T > 1) return false;
    }  
    
    int idx_P = strchr(arr, 'P') - arr;
    int idx_T = strchr(arr, 'T') - arr;
    int num_front  = idx_P;
    int num_middle = idx_T - idx_P - 1;
    int num_back   = strlen(arr) - idx_T - 1;
    
    if(num_middle == 0 || num_front*(num_middle-1) != num_back-num_front)
        return false;
    else
        return true;
}

int main()
{
    int n;
    char arr[9][100] = {0};
    
    cin >> n;
    
    for(int i = 0; i < n; ++i) cin >> arr[i];
    
    for(int i = 0; i < n; ++i)
        if(judge(arr[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
}
