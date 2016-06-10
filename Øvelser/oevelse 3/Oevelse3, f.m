clc;clear;

s = tf('s');

G = tf((50*1000)/((s+50)*(s+1000)));

figure(1)
bode(G);

%Opgave B

kp = 13;

G_gain = G*kp;


figure(2)
step(feedback(G_gain,1));

figure(3)
bode(G_gain);

%Opgave C

kp_30 = 43.152;

G_gain_30 = G*kp_30;

figure(4)
step(feedback(G_gain_30,1));

figure(5)
bode(G_gain_30)

beta = 0.313;
T = 0.00136;
kc =0.56;

G_lead = (kc/beta)*((s+(1/T))/(s+(1/(beta*T))));

G_samlet = G_lead*G_gain_30;

figure(6)
bode(G_samlet);

figure(7)
step(feedback(G_samlet,1));

% Opgave d

alpha = 14.286;
T_lag = 0.034;

G_lag = (s+(1/T_lag))/(s+(1/(alpha*T_lag)));

figure
step(feedback(G_gain*G_lag,1));

figure
bode(G_gain*G_lag);







