#include<stdio.h>
#include<malloc.h>


void tribo(int* x,int* y,int* la,int* last_count,int* size );


int main()
{
    int* size;
    printf("Enter A Number:");
    scanf("%d",&size);
    int f = 0;
    int y = 1;
    int la = 2 ;
    int last_count = 0;
    tribo(&f,&y,&la,&last_count,&size);

    return 0;
}
void tribo(int* x,int* y,int* la,int* last_count,int* size)
{
    int i;
    i = *x;

    int k;
    k = *y;

    int k1;
    k1 = *la;

    //new variable
    int new_result;
    new_result = *last_count;

    //array size
    int list_size;
    list_size = *size;

    //openup an Array
    int *TriboArray;
    TriboArray = (int*)malloc(list_size*sizeof(int));
    //fill with it
    (*((TriboArray)+(i))) = i;
    printf("%d",(*((TriboArray)+(i))));

    (*((TriboArray)+(k))) = k;
    printf(" %d",(*((TriboArray)+(k))));

    (*((TriboArray)+(k1))) = k1;
    printf(" %d",(*((TriboArray)+(k1))));

    for(int count = 0; count < list_size-3; count++)
    {
        new_result = i + k + k1;
        (*((TriboArray)+(new_result))) = new_result;
        printf(" %d",(*((TriboArray)+(new_result))));
        i = k;
        k = k1;
        k1 = new_result;
    }

    free(TriboArray);

}