int recursive(int a){
    int p;
    if (a!=0){
        return (a+recursive(a-1));
    }
    else{
        return (a);
    }
    
}
int bin(int a){
    if (a==0){
        return 0;
    }
    else{
        return(a%2+10*bin(a/2));
    }
}
int gcd(int a, int b){
    if (b!=0){
        return gcd(b, a%b);
    }
    else{
        return a;
    }
}
int count1(int a){
    if (a==0){
        return 0;
    }
    return (a & 1)+count1(a>>1);
}