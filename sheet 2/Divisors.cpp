#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int flag=0;
    for(int i=1;i<=n;i++){
            if (n%i == 0){
                flag=1;
                cout << i << endl;
            }
            else
                flag=0;
    }

    return 0;
}
