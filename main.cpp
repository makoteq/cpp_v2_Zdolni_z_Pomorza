#include <iostream>

using namespace std;
int j,h,i,wiersz,licz=2;
int main(){
    cout << "Podaj h=";
    cin>>h;
    cout <<1<<endl;
    for(i=1;i<=h;i++){
        cout <<i+1;
        wiersz++;
        for(j=1;j<=wiersz;j++){
        licz=licz+i;
        cout <<" "<<i+licz;
    }
    licz=0;
    cout<<endl;
    }
    return 0;
}
