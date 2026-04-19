#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int i=1;
    int sum=0;
    cin>>n;

    for(i;i<=100;i++)
    {
        sum+=i; // 그 순간에 더해진 값.
        if(sum>=n)
        {
            break;
            
        }
    }
    cout<<i;
    return 0;
}