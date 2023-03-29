#include "cozi.h"

typedef int Data;

int main()
{
    Queue* q;
    q = createQueue();
    int i = 0;
    int v[4] = {1,2,3,4};
    for ( i = 0; i < 4; i++ ){
        enQueue(q, v[i]);
    }
    while(!isEmpty(q)){
        printf("%d ", deQueue(q));
    }
    return 0;
}
