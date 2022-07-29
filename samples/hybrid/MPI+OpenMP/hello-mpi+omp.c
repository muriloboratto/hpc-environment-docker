/*
@(#)File:           $hello-mpi+omp.c$
@(#)Last changed:   $Date: 20220717 11:35:00 $
@(#)Purpose:        Simple example 'Hello Word!' in MPI and OpenMP
@(#)Author:         Murilo Boratto < muriloboratto 'at' fieb.org.br >
@(#)Usage:         
@(*) Hotocompile:   mpicc hello-mpi+omp.c -o hello-mpi+omp -fopenmp
@(*) Hotoexecute:   OMP_NUM_THREADS=2 mpirun -np 4 ./hello-mpi+omp
*/

#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>
#include <omp.h>

int main( int argc, char *argv[])
{
    int nthreads,numberOfProcesses,rank,idthr;
    int  namelen;
    char processor_name[MPI_MAX_PROCESSOR_NAME];

    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,&numberOfProcesses);
    MPI_Comm_rank(MPI_COMM_WORLD,&rank);
    MPI_Get_processor_name(processor_name, &namelen);

    #pragma omp parallel private(idthr) firstprivate(rank, processor_name)
    {
        idthr = omp_get_thread_num();
        printf("Hello World!  thread %d from %d processor %s\n", idthr, rank, processor_name);

    }

    MPI_Finalize();
}