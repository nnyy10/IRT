clc;clear; close all;

%% Inits
s = tf('s');
z = tf('z');
G = tf((50*1000)/((s+50)*(s+1000)));

%% Spørgsmål 1 (30% OS)
K = 42;
figure(10), step(feedback(G,1), feedback(K*G,1));

faseFreq = 1300; 
TLow = 0.15/faseFreq;
THigh = 0.5/faseFreq;

figure(2), step(feedback(c2d(G*K, TLow, 'zoh'),1), 'r');
hold on, step(feedback(c2d(K*G, THigh, 'zoh'),1), 'b');

figure(3), bodeplot(c2d(G*K, TLow, 'zoh'), 'r');
hold on, bodeplot(c2d(G*K, THigh, 'zoh'), 'b');

%% Spørgsmål 2
Td = 0.0008;
[num, den] = pade(Td, 3);
delay = tf(num, den);

figure(4), bode(K*G, 'r'), hold on, bode(delay,'b'), hold on, bode(delay*K*G,'y');

%% Spørgsmål 3, lead-regulator
OS = 30;
zeta = (-log(OS/100)/(sqrt(pi^2+log(OS/100)^2)));
%faseMarg = atan((2*zeta)/(((-2*zeta^2)+(1+4*zeta^4)^(1/2))^(1/2)));
faseMarg = zeta*100;
fasePlus = 60;
fasePlusRad = degtorad(fasePlus);
beta = (1-sin(fasePlusRad))/(1+sin(fasePlusRad));
TLead = 1/(faseFreq*sqrt(beta));
Kc = beta^(1/2);
GLead = tf(Kc*(1/beta)*(s+(1/TLead))/(s+1/(beta*TLead)));
% Samligner med og uden lead regulator
figure(5), bode(K*G*delay, 'r'), hold on, bode(K*G*delay*GLead, 'b');
figure(6), step(feedback(K*G*delay*GLead,1));
figure(7), step(feedback(K*G*delay, 1));

%% Spørgsmål 4, bilineær transformation ('Tustin')
GLeadTustinLow = c2d(GLead, THigh/10, 'tustin')
GLeadTustinHigh = c2d(GLead, THigh, 'tustin')

%% Spørgsmål 5, bestem overføringsfunktionerne for begge sampleintervaller
GFinalHigh = c2d(G*K*delay*GLead, THigh, 'zoh');
GFinalLow = c2d(G*K*delay*GLead, THigh/10, 'zoh');
figure(8), step(feedback(GFinalLow,1));
hold on, step(feedback(GFinalHigh,1));

%% Spørgsmål 6, 