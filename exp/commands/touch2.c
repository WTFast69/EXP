#include <stdio.h>
int main(int argc,char* argv[]) 
{ 
FILE *fp;
for(int i=1;i<argc;i++){
if(fopen(argv[i], "r")) 
{printf("File already exists %s\n" ,argv[i]);
}
else
fp  = fopen(argv[i], "w");
}}