#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,c;

    cin>>A>>B;

    c=A/B;
    
    cout<<A/B<<".";
    A=A%B;

    for(int i =0;i<20;i++)
    {
       A =A*10;
       cout<<A/B;
       A=A%B;
    }

    return 0;
}