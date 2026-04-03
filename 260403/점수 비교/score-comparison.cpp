#include <iostream>
using namespace std;

int main() {
    int a_mat,a_eng,b_mat,b_eng;

    cin>>a_mat>>a_eng;
    cin>>b_mat>>b_eng;

    cout<<((a_mat>b_mat)&&(a_eng>b_eng))<<endl;
    return 0;
}