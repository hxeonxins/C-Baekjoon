#include <stdio.h>
int main(){
    int  T1, F1, S1, P1, C1, T2, F2, S2, P2, C2;
    scanf("%d %d %d %d %d", &T1, &F1, &S1, &P1, &C1);
    scanf("%d %d %d %d %d", &T2, &F2, &S2, &P2, &C2);
    int sum1 = T1*6+F1*3+S1*2+P1*1+C1*2;
    int sum2 = T2*6+F2*3+S2*2+P2*1+C2*2;
    
    printf("%d %d", sum1, sum2);
    
    return 0;
}