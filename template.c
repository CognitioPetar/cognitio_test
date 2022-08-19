// https://stackoverflow.com/questions/10468128/how-do-you-make-an-array-of-structs-in-c  array of 
// https://www.tutorialspoint.com/cprogramming/c_structures.htm# good tutorial
// https://www.programiz.com/c-programming/c-pointer-functions Pointers and functions
// https://stackoverflow.com/questions/1675351/typedef-struct-vs-struct-definitions sa typedef ne moraš pisati stalno struct
// https://stackoverflow.com/questions/32698293/assign-values-to-structure-variables 

// MAIN

#include <stdio.h>
#include <string.h>
 
const int n = 6;
 
struct ID {
   char  diag[50];
   int   position;
   int   speed;
};

void test_function(struct ID *j_id);
void addOne(int* ptr);

int main(){
    
    int  var = 20;          /* actual variable declaration */
    int  *ip = NULL;        /* pointer to int variable */
    
    ip = &var;  /* store address of var in pointer variable */
    
    printf("Address stored in ip variable: %x\n", ip );    /* address stored in pointer variable */

    printf("Value of *ip variable: %d\n", *ip );  /* access the value using the pointer */
   
    int* p, i = 10;
    p = &i;
    addOne(p);
    
    printf("Pointer function test %d\n", *p); // 11

    struct ID j_id[n];
    
    strcpy( j_id[1].diag, "good");

    j_id[1].position = 10;
    j_id[2].position = 20;
      
    printf( "J1 position is : %d\n", j_id[1].position);
    printf( "J2 position is : %d\n", j_id[2].position);

    test_function(&j_id[1]); /* we pass adress of j_id[1] and then we can access any structure member in */
    
    printf( "J1 position is : %d\n", j_id[1].position);
    
    j_id[1].position = 10;
    
    printf( "J1 position is : %d\n", j_id[1].position);
    
    return 0;
}

void test_function(struct ID *j_id){ /* pointer to struct variable */ 
    j_id->position = 123;
    printf( "J1 position pointer is : %d\n", j_id->position);    

}

void addOne(int* ptr) {
    (*ptr)++; // adding 1 to *ptr
}