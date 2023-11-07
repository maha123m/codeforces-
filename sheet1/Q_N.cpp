#include <iostream>

using namespace std;

int main()
{
    char x;
    cin>>x;
    if(x>='a' && x<='z' ){
        x=x-32;
        cout<<x;
    }
    else{
        x=x+32;
        cout <<x;
    }
    return 0;
}
