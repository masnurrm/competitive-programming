#include <stdio.h>

int main()
{
    long long i, t, n, gedungke, gedungdari, staminanya , sum1 = 0, sum2=0, max=0;
    scanf("%lld", &t);
    scanf("%lld", &n);
    for(i=0;i<1;i++){
        scanf("%lld", &gedungke);
        gedungdari=gedungke;
        scanf("%lld", &staminanya);
        sum1 = staminanya + sum1;
        sum2 = sum1;
    }
    for(i=1;i<t;i++){
        scanf("%lld", &gedungke);
        scanf("%lld", &staminanya);
        sum1 = staminanya + sum1;
        sum2 = sum1;
    }
    sum1 = sum1 - gedungke;

    gedungdari= n-gedungdari;
    sum2=sum2-gedungdari;

    if(sum1>=sum2){
        printf("%lld", sum1);
    }
    else{
        printf("%lld", sum2);
    }

    return 0;
}
