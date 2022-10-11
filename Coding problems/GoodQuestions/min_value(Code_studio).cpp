long long minValue(int &a, long long &b)
{
    long long c=pow(10,a-1);
    long long temp=c;
    long long x=temp%b;
    if(x!=0){
        temp=b-x;
        c=c+temp ;  
    } 
    return c; 
}