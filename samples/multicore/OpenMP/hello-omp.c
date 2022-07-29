/*
@(#)File:           $hello-omp.c$
@(#)Last changed:   $Date: 20121013 11:35:00 $
@(#)Purpose:        Simple example 'Hello Word!' in OpenMP
@(#)Author:         Murilo Boratto < muriloboratto 'at' uneb.br >
@(#)Usage:         
@(*) Hotocompile:   gcc hello-omp.c -o hello-omp -fopenmp
@(*) Hotoexecute:   OMP_NUM_THREADS=4 ./hello-omp
*/

#include <stdio.h>
#include <omp.h>

int main (int argc, char **argv)  {

 int nthreads, tid;
    
 #pragma omp parallel private(tid)     
 {                                     
   tid = omp_get_thread_num();         
   nthreads = omp_get_num_threads();   
   printf("Hello World! I am %d of %d threads\n", tid, nthreads);
 }     

 return 0;

}