#include<iostream>
using namespace std;

int main()
{

    unsigned T;
    unsigned N;
    unsigned result = 1;
    
    cin>>T;
    for(unsigned i = 0; i < T; i++)
    {
        result=1;
        cin>>N;
        for(unsigned j = 1; j <= N; j++)
        {
            if(j%2==0)
            {
                result +=1; 
            }
            else
            {
                result *=2;
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
