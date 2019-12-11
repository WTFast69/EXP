#include<stdio.h>

void main(int argc, char* argv[]){
int status;
for (int i=1;i<argc;i++){
status=remove(argv[i]);
if(status)
    printf("Failed to delete %s\n",argv[i]);
}}