#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    if(n%4!=0)//윤년이 아닌 해
    {
        if(n!=2)//홀수 해
        {
            cout<<31;
        }
        else
        cout<<28;
        
    }
    return 0;
}