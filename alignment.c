#include <stdio.h>
typedef struct{
    char  c1;
    short s; 
    char  c2; 
    int   i;
}T_FOO;

int main()
{
 T_FOO a; 
 a.c1 = 's';
 a.s  = 32760;
 a.c2 = 'd';
 a.i  = 30000;
 int i = 0;
 char name[12] ={'a','a','a','a'};
    for (i = 0; i < 12; i++)
    {
     printf (" name[%d] = %d, &name[%d]= 0x%x\n", 
             i, name[i], i, &name[i]);
    }
      

    printf("c1 -> %d, s -> %d, c2 -> %d, i -> %d\n", 
          (unsigned int)(void*)&a.c1 - (unsigned int)(void*)&a,
          (unsigned int)(void*)&a.s  - (unsigned int)(void*)&a, 
          (unsigned int)(void*)&a.c2 - (unsigned int)(void*)&a, 
          (unsigned int)(void*)&a.i  - (unsigned int)(void*)&a); 
    printf("&c 0x%x, &s 0x%x, &c2 0x%x,&i 0x%x\n",
           &a.c1, &a.s, &a.c2, &a.i);     
    printf("sizeof char %d, short %d, int %d, T_FOO %d\n",
           sizeof(a.c1), sizeof(a.s), sizeof(a.i), sizeof(a)); 
    memcpy (&name, &a, sizeof(a)); 

    for (i = 0; i < 12; i++)
    {
     printf (" name[%d] = %d, &name[%d]= 0x%x\n", 
             i, name[i], i, &name[i]);
    }
           
    return 0;
}