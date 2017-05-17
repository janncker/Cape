#!/bin/bash
rm *.o  Cape.py* *.so *.cxx
swig -python -c++ Cape.i
g++ -c  -fPIC -lstdc++ Cape_wrap.cxx Cape.cpp -I /usr/include/python2.7/
g++ -shared Cape_wrap.o Cape.o -o _Cape.so
