#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,C;
    int mid=0;
    cin >>A>>B>>C;
    if(A>B&&A<C)
    {
        mid=A;
    }
    else if(B>A&&B<C)
    {
        mid=B;
    }
    else
    mid=C;

    cout<<mid;

    return 0;
}