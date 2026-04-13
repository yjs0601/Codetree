#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    cin>>A>>B;

    while(A<=B)
    {
        cout<<A<<" ";
        if(A%2==1)
        {
            A=A*2;
        }
        else if(A%2==0)
        {
            A=A+3;
        }
        
    }
    return 0;
}