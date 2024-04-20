#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    float a,b,jam, tarh, zarb, taqsim;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    jam=a*a+b*b;
    tarh=a*a-b*b;
    zarb=a*a*b*b;
    taqsim=a*a/b*b;
    cout<<"jam= "<<jam << endl;
    cout << "tarh= " << tarh << endl;
    cout << "zarb= " << zarb << endl;
    cout << "taqsim= " << taqsim ;

}
