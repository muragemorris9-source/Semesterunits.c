//"simple c program";
/*
Name:Morris Murage Muriuki 
Reg:CT100/G/26143/25
Description:program to compute mobile data purchase
*/
#include <stdio.h>


int main() {
    int choice;
    printf("option bundle cost(kes)\n");
    printf("100MB kes50\n.");
    printf("500MB kes200\n.");
    printf("1GB kes350\n.");
    printf("2GB kes600\n.");
    
    printf("Enter choice (1-4):");
    scanf("%d",& choice);
    
    if(choice==1){
       printf("100MB kes 50");
    }
    else if(choice==2){
        printf("500MB KES 200");
    }
    else if(choice==3){
        printf("1GB KES 350");
    }
    else if(choice==4){
        printf("2GB KES 600");
    }
    else{
        printf("invalid choice");
    }
    return 0;
}