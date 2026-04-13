#include <iostream>
using namespace std;


int main() {
    int N;

    cin>>N;
    // Please write your code here.
    for (int i=1;i<=N;i++)
    {
        if(i%2==0||i%3==0)
        {
            cout<<1<< " ";
        }
        else
        cout<<0<< " ";
    }
    return 0;
}