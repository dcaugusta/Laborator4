#include <iostream>

using namespace std;

int main()

{
    int a[20], nr, i, aux;

    cout << "Numarul de elemente din sirul a (maximum 20) ";
    cin >> nr;
    for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }


for (i = 0; i < nr; i++) {
    if ( a[i] > a[i+1]){
        aux = a[i];
        a[i]=a[i+1];
        a[i+1]=aux;
        }
    }
for (i = 0; i < nr; i++) {
        cout << "a[" << i << "] = " << a[i] << '\n' ;

}
cout<< endl;
   return 0;
}
