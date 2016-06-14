clc;clear;close all;

s = tf('s');

G = 14.34/(s*(s+33));

figure(1)
bode(G);

figure(2)
step(feedback(G,1));

Kc = 39.355;
%b = 2.116;
%Tlead = 0.055;
%G_lead = Kc*(1/b)*((s+(1/Tlead))/(s+(1/(b*Tlead))));

G_samlet = G*Kc;

figure(5)
bode(G_samlet);
figure(6)
step(feedback(G_samlet,1));

G_lead = (s+10)/s;

% Opgave C
G_samlet_med_lead = G_samlet*G_lead;

G_samlet_uden_lead = G_samlet;

figure(6)
step(feedback(G_samlet_uden_lead,1));
hold on
step(feedback(G_samlet_med_lead,1));

figure
ramp = 0.4/s;
step(ramp*feedback(G_samlet_uden_lead,1), 'r');
hold on
step(ramp*feedback(G_samlet_med_lead,1), 'b');
hold on
step(ramp, 'k')
legend('Uden lead', 'Med lead', 'input')



% forklar forløbet
figure(8)
bode(G_samlet)
hold on
bode(G_samlet*(s+10)/s)


% Opgave d)
Kc_90 = 90;
G_samlet_90 = G*Kc_90;

figure(9)
bode(G_samlet_90);

figure(10)
step(feedback(G_samlet_90,1));

Kc = 0.745;
b = 0.555;
Tlead = 0.045;
G_lead = Kc*(1/b)*((s+(1/Tlead))/(s+(1/(b*Tlead))));

G_samlet_90_lead = G_samlet_90*G_lead;

figure(11)
bode(G_samlet_90_lead);

figure(12)
step(feedback(G_samlet_90_lead,1));










