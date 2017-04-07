#include <iostream>
using namespace std;

long long bil, n;
long long hasil;

void prosesfaktor(){
hasil=1;
for(bil=n; bil>=1; bil--)
 {
hasil=hasil*bil;
 }
}
     

int main() {

cout<<"Masukan angka yang akan di faktorialkan : ";
cin >> n;
prosesfaktor();
 
cout<<"Hasil Faktorial dari " <<n<< " adalah " <<hasil<<endl;
return 0;
}
