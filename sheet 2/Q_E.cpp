#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long number;
    int Max =0;
    for(int i=0;i<n;i++){
        cin>>number;
        if(number>=Max){
            Max=number;
            continue;
        }
    }
    cout<<Max;

    return 0;
}
