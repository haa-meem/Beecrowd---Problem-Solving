#include<bits/stdc++.h>
using namespace std;
int main()
{
    int P;
    for(int i=0; i<=10; i++)
    {
        cin>>P;
        if(P==2002)
        {
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else if(P!=2002||typeid(P)!=typeid(int))
        {
            cout<<"Senha Invalida"<<endl;
        }
    }
    return 0;
}

