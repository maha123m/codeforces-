#include <iostream>
#include<math.h>

using namespace std;

int main()
{

    //We will start from the smallest number and go down because the greatest common divisor is definitely smaller than the smallest number you entered.
    int a,b;
    cin>>a>>b;// The greatest common divisor is impossible to be greater than any two numbers I entered
    int minumum=min(a,b);
    for(int i=minumum; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            cout<<i<<endl;
            break;
        }


    }

    return  0;
}
