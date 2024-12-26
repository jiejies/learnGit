#include "compiler.h"
int compiler_file(const char*filename,const char*out_filename,int flags){
    struct compile_process* process=compile_process_create(filename,out_filename,flags);
    if(!process){
        return COMPILER_FAILED_WITH_ERRORS;
    }
    //Preform lexical analysis词法分析
    //Preform parsing语义分析
    //preform code generation代码生成
    return COMPILER_FILE_COMPILED_OK;
}