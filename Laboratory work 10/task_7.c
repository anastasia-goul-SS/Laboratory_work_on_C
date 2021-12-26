#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* str_dup(const char*);
int main(){ char *s,*s_,*str=(char*)malloc(10);
    gets(str);
    s=strdup(str);
    s_=str_dup(str);
    printf("%s\n",s);
    printf("%s\n",s_);
    free(s_);
    free(s);
    free(str);
return 0;
} char* str_dup(const char* s){
    char *s1=(char*)malloc(strlen(s));
    s1=strcpy(s1,s);
return s1; }