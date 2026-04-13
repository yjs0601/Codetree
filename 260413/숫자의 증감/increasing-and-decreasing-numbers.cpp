#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char C;
    int N;

    cin>>C>>N;

    if(C=='A')
    {
        for (int i =1;i<=N;i++)
        {
            cout<<i<< " ";
        }
    }
    else if(C=='D')
    {
        for(N;N>=1;N--)
        {
            cout<<N<< " ";
        }
    }
    return 0;
}