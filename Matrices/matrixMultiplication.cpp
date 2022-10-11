#include<iostream>
using namespace std;

void multi(int m, int n , int max1[][3], int p, int q, int max2[][2]){
    int i, j,k;
    int max3[m][q];
    
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            int sum=0;
            // max[i][j]=0;
            for(int k=0; k<3; k++){
                sum =  sum + max1[i][k] * max2[k][j];  
            }
            max3[i][j] = sum;
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout<<max3[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int max1[][3] = {{2,3,4},{5,6,1},{1,3,2}};
    int max2[][2] = {{2,2},{3,1},{7,2}};

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<max1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<max2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int m = 3, n=3;
    int p = 3, q=2;
    multi(m,n,max1,  p,q,max2);
    return 0;
}