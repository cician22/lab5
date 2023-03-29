#include "stive.h"

typedef char Data;

int main()
{
    int i = 0;
    Node * stackTop = NULL ;
    char v[] = "abcd";
    for ( i = 0; i < 4; i++){
        push(&stackTop, v[i]);
    }
    while(i != 0){
        printf("%c ", top(stackTop));
        pop(&stackTop);
        i--;
    }
    printf("\n");
    for ( i = 0; i < 4; i++){
        push(&stackTop, v[i]);
    }
    push(&stackTop, 'Q');
    i = 5;
    while(i != 0){
        printf("%c ", top(stackTop));
        pop(&stackTop);
        i--;
    }
    //pop(&stackTop);
    //isEmpty(stackTop);
    //deleteStack(&stackTop);

    return 0;
}
