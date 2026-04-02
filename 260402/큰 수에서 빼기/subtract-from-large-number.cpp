#include <iostream>
using namespace std;

int main() {
    int A,B,result;
    
    cin>> A >> B;

    if (A>B)
    {
        result = A-B;
        cout<<result<<endl;
    }
    else
    {
        result = B-A;
        cout<<result<<endl;
    }
    return 0;
}