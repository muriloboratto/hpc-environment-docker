FROM ubuntu:18.04

ENV LANG C.UTF-8
ENV LC_ALL C.UTF-8

MAINTAINER @muriloboratto

USER root

WORKDIR /home/admin/

COPY samples/ /home/admin/samples/

RUN apt-get --yes -qq update \
 && apt-get --yes -qq upgrade \
 && apt-get --yes -qq install \
                      bzip2 \
                      cmake \
                      curl \
                      g++ \
                      gcc \
                      gfortran \
                      git \
                      gnuplot \
                      htop \
                      libblas-dev \
                      liblapack-dev \
                      libopenmpi-dev \
                      libomp-dev \
                      openmpi-bin \
                      python3-dev \
                      python3-pip \
                      wget  \
                      vim   \
                      htop  \
                      zip   \
                      sudo  \
                      unzip \
 && apt-get --yes -qq clean \
 && rm -rf /var/lib/apt/lists/*

CMD [ "/bin/bash" ]
