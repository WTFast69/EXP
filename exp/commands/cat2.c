#include<stdio.h>
#include<unistd.h> 
#include<stdlib.h> 
#include<fcntl.h> 

int main(int argc,char *argv[])
{
    int fd, i, ch; 
char* filename;
    if (argc==1){
scanf("%m[^¤]s", &filename);
printf("%s",filename);
/*fgets(filename, 1000000000, stdin);
printf("%s",filename);*/
}
else{    
    for (i = 1; i < argc; i++) {                    
        fd = open(argv[i],O_RDONLY);        
        
        if(fd < 0)  
           printf("No such file %s\n",argv[i]);
	else{ 
        
        while(read(fd,&ch,1))                   
            
            write(STDOUT_FILENO,&ch,1);  
        
        close(fd);                            
    }}
}
 }
