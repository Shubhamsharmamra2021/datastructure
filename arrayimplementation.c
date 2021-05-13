#include <stdio.h>
#include <stdlib.h>

struct myArray
{
   int totalsize;
   int usedsize;
   int *ptr;

};

void createArray (struct myArray * a,int tsize,int usize){
    (*a).totalsize = tsize;
    (*a).usedsize = usize;
    (*a).ptr = (int *)malloc(tsize * sizeof(int));

}
void setvalue(struct myArray * a){
     int n;
     for(int i=0;i<(*a).usedsize;i++){
     printf("Enter the value of elements %d =",i);
      scanf("%d",&n);
       (a->ptr)[i]=n;
     }
}

void show(struct myArray * a){
     for(int i=0;i<(*a).usedsize;i++){
     printf("%d\n",(a->ptr)[i]);
     }
}

int main(){
      struct myArray marks;
      createArray(&marks,10,2);
      printf("we are setvalue of it \n" );
      setvalue(&marks);
      printf("we are show of it \n ");
        show(&marks);
return 0;
}
