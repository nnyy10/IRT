clear;
clc;

s=tf('s');

Gm=720/(s+33);

N=24;

K_PA=1;

K_POT=0.478;

Gc=40;
G=Gc*Gm*K_PA*(1/s)*(1/N)*K_POT;

%step(feedback(G,1))
%5% OS
%stationær fejl 0
%settling time 0.25 or higher

%bode(G)
%phase margin frekvens= 15.7 or lower
%phase margin =64 or higher
syms t;

rampresponse=limit(Gc*(720/(t+33))*K_PA*(1/t)*(1/N)*K_POT*t,t,0);

K=0.4/rampresponse
K=0.0226;


%% uden Gc
%Gc=35*((s+10)/s);
G=Gc*Gm*K_PA*(1/s)*(1/N)*K_POT;

figure(1)
step(feedback(G,1))
Ramp=1/s;

figure(2)
step(Ramp*feedback(G,1))



%% med Gc
Gc=40*((s+10)/s);
G1=Gc*Gm*K_PA*(1/s)*(1/N)*K_POT;

figure(3)
step(feedback(G1,1))
Ramp=1/s;

figure(4)
step(Ramp*feedback(G1,1))
hold on
step(Ramp*feedback(G,1))

%% med Gc=90
Gc=90;
G2=Gc*Gm*K_PA*(1/s)*(1/N)*K_POT;

figure(5)
step(feedback(G2,1))

figure(6)
bode(G2)
%29.2 phase margin frekvens
%48 phase margin

theta_m_plus=64-48;
phi_m_plus=theta_m_plus*2*pi/360;

beta=(1-sin(phi_m_plus))/(1+sin(phi_m_plus));

T=1/(sqrt(beta)*29.2);

Kc=0.75;

Glead=Kc*(1/beta)*((s+1/T)/(s+1/(beta*T)));

figure(7)
step(feedback(Glead*G2,1))

figure(8)
bode(G2*Glead)

%margin(G2*Glead)

zpk(Glead)

