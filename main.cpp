#include<iostream>
using namespace std;
int main ()
{
    int myarray[1000], n, i, j;
    cout << "MASUKKAN BANYAK ELEMEN: ";
    cin >> n;
    cout << "MASUKKAN NILAI: \n";

    for(i=0; i<n; i++){
        cin >> myarray[i];
    }
    cout << endl;
    cout << "HASIL INSERTION SORT" << endl;
    for(int k=1; k<n; k++)
    {
        int temp = myarray[k];
        int j = k-1;
        while(j>=0 && temp <= myarray[j])
        {
            myarray[j+1] = myarray[j];
            j = j-1;
        }
        myarray[j+1] = temp;
    }
    for(int i=0; i<n; i++)
    {
        cout << myarray[i] << " ";
    }
}
