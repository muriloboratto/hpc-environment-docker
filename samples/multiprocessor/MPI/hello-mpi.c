/*
@(#)File:           $hello-mpi.c$
@(#)Last changed:   $Date: 20220718 11:35:00 $
@(#)Purpose:        Simple Example 'Hello Word!' in MPI
@(#)Author:         Murilo Boratto < muriloboratto 'at' fieb.org.br >
@(#)Usage:         
@(*) Hotocompile:   mpicc hello-mpi.c -o hello-mpi
@(*) Hotoexecute:   mpirun -np 4 ./hello-mpi      
*/

#include <mpi.h>
#include <stdio.h>

int main(int argc, char ** argv){

    int rank, size;

    MPI_Init(&argc, &argv);

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    printf("Hello World! I am %d of %d processes\n", rank + 1, size);

    MPI_Finalize();

    return 0;
}
