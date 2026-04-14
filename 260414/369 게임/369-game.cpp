#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int i=1;

    while(i<=N)
    {
        if(i%3==0||i%10 ==3||i%10 ==6||i%10==9||i/10 ==3 ||i/10 ==6||i/10 ==9)
        {
            cout<<0<<" ";
        }
        else
        cout<<i<<" ";

        i++;

    }
    return 0;
}