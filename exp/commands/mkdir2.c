#include <stdio.h>

int main(int argc,char* argv[])
{
    int status;
    for(int i=1;i<argc;++i)
    {status= mkdir(argv[i]);
    if (status)
    printf("Unable to create directory %s\n",argv[i]);
    } }
