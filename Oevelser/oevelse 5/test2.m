clear;
clc;

z=tf('z',0.1)

T=10;
K=0.1;

Hz=1/z

step(Hz)