double myPow(double x, int n) {
    double ans  = 1.0;
        long long N = n;

        if(N<0){
          N =   N * -1;
        }
        while(N){
            if(N % 2 !=0 ){
                ans = ans * x;
                N = N -1;
            }else{
                x = x*x;
                N = N/2;
            }
        }
        if(n<0){
            ans = (double)(1.0) / double(ans);

        }
        return ans;
}