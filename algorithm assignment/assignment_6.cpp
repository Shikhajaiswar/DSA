#include<iostream>
using namespace std;

class Node{
    public:
    int min;
    int max;
};

Node fun(int arr[], int s, int e){
    Node p;
    if(s==e){
        p.min = arr[s];
        p.max = arr[s];
    }
    else if(s==e-1){
        if(arr[s]>arr[e]){
            p.min = arr[e];
            p.max = arr[s];
        }
        p.min = arr[s];
        p.max = arr[e];
    }

    else{
        int mid = (s+e)/2;
        int minmaxL = fun(arr, mid+1, e);
        int minmaxR = fun(arr, s, mid);

        if(minmaxL>minmaxR){
            p = minmaxR;
        }
        else{
            p = minmaxL;
        }
        
        return p;
    }


}

int main()
{
    int n;
    cout<<"Enter the number of ptient : ";
    cin>>n;
    cout<<"Enter the blood pressure of the patient : ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[n];
    }

    Node p = fun(arr, 0, n-1);
    cout << "Minimum element is "
         << p.min << endl;
    cout << "Maximum element is "
         << p.max;
    return 0;
}