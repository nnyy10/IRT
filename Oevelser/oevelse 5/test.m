clear;
clc;

s=tf('s');

H=100/(s^2+52*s+100);
Hz1=c2d(H,0.1,'tustin');

Hz01=c2d(H,0.0001,'tustin');

figure(1)
pzplot(Hz1)

figure(2)
pzplot(Hz01)

figure(3)
step(Hz1)

figure(4)
step(feedback(Hz1,1))

figure(5)
step(Hz1)

figure(6)
pzmap(H)