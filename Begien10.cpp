#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    float c,d,jam, tarh, zarb, taqsim;
    cout<<"c=";
    cin>>c;
    cout<<"d=";
    cin>>d;
    jam=c*c+d*d;
    tarh=c*c-d*d;
    zarb=c*c*d*d;
    taqsim=c*c/d*d;
    cout<<"jam= "<<jam << endl;
    cout << "tarh= " << tarh << endl;
    cout << "zarb= " << zarb << endl;
    cout << "taqsim= " << taqsim ;

}
