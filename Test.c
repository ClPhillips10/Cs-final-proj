#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    return 0;
}


void test(){
    char *str = "Hello World";
    char *str2 = malloc(20);
    strcpy(str2, str);
    printf("%s\n", str2);
    free(str2);
}