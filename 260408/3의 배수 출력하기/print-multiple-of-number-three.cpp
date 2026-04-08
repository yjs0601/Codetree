#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    int a=1;

    cin>>N;

    while(a<=N)
    {
        if(a%3==0)
        {
            cout<<a<< " ";
        }
        a++;
        
    }
    return 0;
}