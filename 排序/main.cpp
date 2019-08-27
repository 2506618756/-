#include <iostream>
#include <algorithm>
#define MAX 10
using namespace std;

int main()
{
    int *p = new int[10];
    
    for( int i=0; i<MAX; i++ )
    {
        //p[i] = i+1;
        cin >> p[i];
    }
    sort(p,p+10);
    for( int i=0; i<MAX; i++ )
    {
        cout << p[i] << endl;
    }
    return 0;
}
