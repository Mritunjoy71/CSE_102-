#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    //char str[80]="this is a file system test";
    FILE *fp;
    char ch;
    if(argc!=3){
        printf("usage:find<file name>  <ch>\n");
        exit(1);

    }

    if((fp=fopen(argv[1],"r"))==NULL){
        printf("can not open the file");
        exit(1);

    }
    while((ch=fgetc(fp)!=EOF)){
        if(ch==*argv[2]){
            printf("%c found,ch");
            break;
        }
    }
    fclose(fp);
    return 0;









}
