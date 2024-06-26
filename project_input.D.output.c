#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    FILE *f1,*f2;
    char input[50],output[50];
    printf("inputfile ? :");
    fgets(input,sizeof(input),stdin);
    if (input[strlen(input)-1]=='\n')
        input[strlen(input)-1] = '\0' ;//728
    f1=fopen(input,"r");
    if(f1==NULL){
        printf("cannt open inputfile");
        return 0 ;
    }
    printf ("outputfile ? :");
    fgets(output,sizeof(output),stdin);
     if (output[strlen(output)-1]=='\n')
        output[strlen(output)-1] = '\0' ; 
    f2=fopen(output,"r+");
    if(f2==NULL){
        printf("cannt open outputfile");
        return 0 ;
    }  
    
}