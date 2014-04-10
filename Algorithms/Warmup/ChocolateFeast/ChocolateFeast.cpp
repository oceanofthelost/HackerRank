#include<iostream>
using namespace std;

int main()
{
    unsigned T; //number of test cases
    unsigned N; //total amount of money
    unsigned C; //cost per chocolate bar
    unsigned M; //number of wrappers needed for free chocolate bar

    cin>>T;

    for(unsigned i=0;i<T;i++)
    {
        cin>>N>>C>>M;
        unsigned wrappers = N/C;
        unsigned result=wrappers;
        while(wrappers>=M)
        {
            wrappers-=(M-1);
            result+=1;
        }
        cout<<result<<endl;
    }

    return 0;
}
