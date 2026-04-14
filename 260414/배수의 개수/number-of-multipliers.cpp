#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int thr=0;
    int fiv=0;
    
    for (int i=1;i<=10;i++)
    {
        int N;
        cin>>N;

        if(N%3==0)
        {
            thr++;
        }
        if(N%5==0)
        {
            fiv++;
        }
    
    }
    cout<<thr<<" "<<fiv;
    return 0;
}