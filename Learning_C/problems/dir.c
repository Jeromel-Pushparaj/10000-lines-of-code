#include<stdio.h>
#include<dirent.h>

int main(void){
    struct dirent *files;
    DIR *dir = opendir(".");
    if(dir == NULL){
        printf("Enter Directory not found.\n");
        return 0;
    }
        
    while((files=readdir(dir))!= NULL){

        printf("%s\n",files->d_name);
        closedir(dir);
        return 0;
    }
}