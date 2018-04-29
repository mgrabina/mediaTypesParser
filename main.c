#include <stdio.h>
#include <stdlib.h>
#define MAXQRANGES 5
#define RANGEMAXLENGTH 5
int main(int argc, char ** argv){
    const char delim = ',';
    char * firstToken;
    char ** ranges = malloc(MAXQRANGES* sizeof(char *));
    int i = 0;
    while((firstToken = strtok(argv[0], delim)) != null){
        ranges[i] = malloc(RANGEMAXLENGTH* sizeof(char));
        strcpy(&ranges[i++], firstToken);
    }
    if(!validateRanges(ranges)){
        println("Invalid Ranges - Quiting program.");
        exit(0);
    }
    char * line = malloc();
    while(strcmp((line = getline()),'.') != 0){
        switch (validateLine(line, ranges)){
            case 1:     println("true");break;
            case -1:    println("true");break;
            default:    println("null");break;
        }
    }
    return 1;
}

int validateRanges(char ** ranges){
    // TODO: Validate ranges
    return 1;
}

int validateLine(const char * line, const char ** ranges){

}
