#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main() 
{
    srand(time(0));
    int i, n, j, t;
    bool scambio;
    cout << "quanti numeri generare?" << endl;
    cin >> n;
    vector<int>r(n);
    i=0;
    while (i<n)
    {
        r[i]= rand()%11;
        i=i+1;
    }
    scambio = true;
    while (i<n and scambio)
    {
        j=0;
        scambio= false;
        while (j<=n-2-i)
        {
            if (r[j]>r[j+1])
            {
                t=r[j];
                r[j]= r[j+1];
                r[j+1] = t;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    j=0;
    while(j<n)
    {
        cout << r[j] << endl;
        j=j+1;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
