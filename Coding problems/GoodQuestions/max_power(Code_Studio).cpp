long long maxPower(vector<int> &a, vector<int> &b){
    // Write your code here
//     int n=sizeof(a)/sizeof(a[0]);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int sum=0; 
    for(int i=0; i<a.size(); i++){
        sum=sum+(a[i]*b[i]);
    }
    return sum;
}