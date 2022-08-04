
bool check(int n)
{
    if(n==2)
        return true;
    else if(n%2==0)
    return check(n/2);
    return false;
}
bool isPowerOfTwo(int n){
    if(n==0)
        return false;
    if(n==1||n==2)
        return true;
    if(check(n))
        return true;
    return false;
}
