#include <bits/stdc++.h>
using namespace std;
main() 
{
int manggakg, manggabuah, orang1, orang2, orang3, jumlahorang, sisamangga;
    cout <<"Mangga Yang Dibeli (Kg) : " ;
    cin >> manggakg; manggabuah = manggakg * 2;
    cout <<"Tetangga Dengan Jumlah Keluarga" << endl;
    cout <<"1 Orang : " ;
    cin >> orang1;
    cout <<"2 Orang : " ;
    cin >> orang2;
    cout <<"3 Orang : " ;
    cin >> orang3;


    jumlahorang = orang1 * 1 + orang2 * 2 + orang3 * 3;
    sisamangga = manggabuah - jumlahorang;

    if(sisamangga < 0)
    cout <<"Mangga yang dibeli kurang";
    else cout << "sisa mangga : " << sisamangga;
}