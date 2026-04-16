#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int cls=0;
    int bok=0;
    int toil=0;

    for(int i=1;i<= n;i++)
    {
        if(i%12==0)
        {
            toil++;
        }
        else if(i%3==0)
        {
            bok++;
        }
        else if(i%2==0)
        {
            cls++;
        }
    }
    cout<<cls<<" "<<bok<<" "<<toil;
    return 0;
}