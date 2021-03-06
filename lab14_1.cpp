#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[],int N, double B[]){
    double AM=0,SD=0,GM=1,HM=0,MX=A[0],MN=A[0];
    for(int i=0;i<N;i++)
    {
        AM += A[i];
        SD += A[i]*A[i];
        GM *= A[i];
        HM += (1/A[i]);
        if(A[i] > MX) MX = A[i];
        if(A[i] < MN) MN = A[i];
    } 
    B[0] = AM/N;
    B[1] = sqrt((SD/N)-pow(B[0],2));
    B[2] = pow(GM,pow(N,-1));
    B[3] = N/HM;
    B[4] = MX;
    B[5] = MN;
}