#include<stdio.h>
#include"compiler.h"
#include"helpers/vector.h"
#include"helpers/buffer.h"
int main(){
    int res=compiler_file("./test.c","./test",0);
    if(res==COMPILER_FILE_COMPILED_OK){
        printf("everything compiled fine\n");
    }
    else if(res==COMPILER_FAILED_WITH_ERRORS){
        printf("compile failed\n");
    }
    else{
        printf("unknown respone for compile file\n");
    }
    return 0;
}