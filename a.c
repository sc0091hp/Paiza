//240730
#include<stdio.h>
#include<string.h>
int main(){
    int i,x;
    int final_ans = 0;
    scanf("%d", &x);
    int j = 0;
    char ans[100];
    char sweet[6] = "sweet";
    for (i = 0; i < x; i++){
        char str[6];
        scanf("%s", str);
        if (j==1 && (strcmp(str, sweet) == 0)){
            if (i!=x-1){
                final_ans = 1;
            }
        }else if(j==1 && (strcmp(str, sweet) != 0)){
            j = 0;
        }else if(j==0 && (strcmp(str, sweet) == 0)){
            j = 1;
        }
    }
    if (final_ans == 1){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
}