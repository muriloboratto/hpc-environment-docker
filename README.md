# Using Docker in High Performance Computing Applications

This project provides a Docker container for an HPC environment based on OpenMP and MPI on Ubuntu Linux.

## Softwares

- Ubuntu 18.04
- bzip2 
- cmake 
- curl
- g++ 
- gcc 
- gfortran
- git 
- gnuplot
- libblas-dev 
- liblapack-dev 
- libopenmpi-dev 
- openmpi-bin 
- python3-dev 
- python3-pip 
- wget 
- vim 
- htop
- sudo
- unzip
- zip

## How to use Docker Container from Dockerfile

```docker build --tag hpc-environment-docker .```

```docker run -it hpc-environment-docker bash```