#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int mid; int fin;
    int scholar=0;
    cin>>mid>>fin;

    if(mid>=90)
    {
        if(fin>=95)
        {
            scholar=100000;
        }
        else if(fin>=90)
        {
            scholar=50000;
        }
    }
    cout<<scholar;
    return 0;
}