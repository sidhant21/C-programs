#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

sumArr(int a[],int n){
    n--;
    if(n ==0)
        return a[0];
    else
        return a[n]+sumArr(a, n);
        }
int main() {
    int n, arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",sumArr(arr,n));
    return 0;
}
