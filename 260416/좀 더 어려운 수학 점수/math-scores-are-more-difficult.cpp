#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_eng,a_mat;
    int b_eng,b_mat;

    cin>>a_mat>>a_eng;
    cin>>b_mat>>b_eng;

    if(a_mat>b_mat)
    {
        cout<<"A";
    }
    else if(b_mat>a_mat)
    {
        cout<<"B";
    }
    else if(a_mat==b_mat)
    {
        if(a_eng>b_eng)
        {
            cout<<"A";
        }
        else
        cout<<"B";
    }
    return 0;
}