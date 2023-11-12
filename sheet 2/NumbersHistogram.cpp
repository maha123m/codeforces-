#include <iostream>

using namespace std;

int main()
{
    char s;
    cin>>s;
    int n;
    cin>>n;
    int number;
    for(int i=1; i<=n; i++)
    {
        cin>>number;
        for(int j=1; j<=number; j++)
        {
            cout<<s;
        }
        cout<<endl;
    }



    return 0;
}
