#include<stdio.h>
void swap(int *a,int *b)
{
    int homestay;
    homestay = *a;
    *a = *b;
    *b = homestay;
}

void sort_nums(int *a,int *b,int *c)
{
   if(*b >= *a && *b >= *c)
   {
       swap(a,b);
   }
    if(*c >= *b && *c >= *a)
   {
       swap(c,a);
       swap(b,c);
   }
   if(*c >= *b)
   {
       swap(b,c);
   }
   
   printf("Sorted Inteagers: %d %d %d",*a,*b,*c);
}

int main(int argc, char const *argv[])
{
    int x,y,z;
    printf("Enter 3 inteagers : ");
    scanf("%d %d %d",&x,&y,&z);
    sort_nums(&x,&y,&z);
    return 0;
}