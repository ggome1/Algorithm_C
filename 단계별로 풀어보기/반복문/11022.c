#include <stdio.h>

int main(){
    int t, a, b;
    scanf("%d", &t);
    int arr[t];
    int a_arr[t], b_arr[t];
    for(int i=0; i<t; i++){
        scanf("%d %d", &a, &b);
        arr[i] = a+b;
        a_arr[i] = a;
        b_arr[i] = b;
    }

    for(int i=0; i<t; i++){
        printf("Case #%d: %d + %d = %d\n", i+1, a_arr[i], b_arr[i], arr[i]);
    }

}