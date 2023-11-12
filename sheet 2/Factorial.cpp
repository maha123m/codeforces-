#include <iostream>
using namespace std;

int main()
{
    int t;//number of test cases
    cin>>t;
    int n;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        long long factorial=1;
        for(int i=1;i<=n;i++){
            factorial=factorial*i;
        }
            cout<<factorial<<endl;
    }

    return 0;
}

