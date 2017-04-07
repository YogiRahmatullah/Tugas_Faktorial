#include <iostream>
using namespace std;

int bil, n;
long long hasil;

int main() {

cout <<"Masukan angka yang akan di faktorialkan : ";
cin >> n;
 
hasil=1;
for(bil=n; bil>=1; bil--)
{
hasil=hasil*bil;
}
cout<<"Hasil Faktorial dari " <<n<< " adalah " <<hasil<<endl;
return 0;
}