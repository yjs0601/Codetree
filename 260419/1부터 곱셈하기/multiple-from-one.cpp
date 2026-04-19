#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int prod=1;
    int i=1;
    cin>>n;
    for(i;i<=10;i++)
    {
        prod*=i;
        if(prod>=n)
        {
            break;
        }
    }

    cout<<i;
    return 0;
}