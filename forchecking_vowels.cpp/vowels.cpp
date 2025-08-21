#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the number of latter in your name: ";
    cin >> n;

    char ar[n];
    cout << "Enter your name: ";

    for(int i=0; i<n; i++){
     cin>> ar[i];
    }

    cout<< "Vowels are: "<<endl;
    for (int i=0; i<n; i++){
        if( (ar[i]=='a')||(ar[i]=='e')||(ar[i]=='i')||(ar[i]=='o')||(ar[i]=='u') )
            cout<< ar[i]<< endl;
    }
return 0;
}
