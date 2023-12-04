/* Write a program that reads the number from the input and takes 
that number from the input according to its frequency, then prints even and odd numbers separately.*/
#include <iostream>
using namespace std;
int main(){
int N;
cout<<"Enter the number of digits: ";
cin>>N;
int k=0;
int AryL [N];
int j=0;
int x = 0;
    while (j<N){
        cin>>x;
        if(x%2==0){
            AryL[k]=x;
            k++;
        }
        cout<<"odd numbers: "<<x<<endl;
    j++;}
        cout<<"Pair numbers: ";
            for(int l=0; l<k;l++)
                cout<<AryL[l]<<',';
        return 0;

    }
