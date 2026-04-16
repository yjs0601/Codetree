#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int fir_ag,sec_ag;
    char fir_sex,sec_sex;

    cin>>fir_ag>>fir_sex;
    cin>>sec_ag>>sec_sex;

    if(fir_ag>=19 && fir_sex=='M')
    {
        cout<<1;
    }
    else if(sec_ag>=19 && sec_sex=='M')
    {
        cout<<1;
    }


    return 0;
}