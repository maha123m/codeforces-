#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int number;
        cin>>number;
        if(number==0)
            cout<<0;
        while(number!=0){
            cout<<number%10<<" ";//we get first digit from right
            number=number/10;
        }
        cout<<endl;
    }

    return 0;
}
