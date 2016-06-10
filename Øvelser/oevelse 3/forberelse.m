clear;
clc;

%a) Afbild systemets amplitude- og fase karakteristik. Skal bruges ved dimensioneringen af de
%forskellige regulatorer
s=tf('s');

G=50000/((s+50)*(s+1000));

bode(G)

P_OS=0.05;
zeta=-log(P_OS)/(pi^2+log(P_OS)^2)^0.5;
phi_m=atan(2*zeta/(-2*zeta^2+(1+4*zeta^4)^0.5)^0.5);
theta_m=phi_m*360/(2*pi);

%22.4dB skal haves via kp

kp_5=10^(22.4/20);

G=50000*kp_5/((s+50)*(s+1000));

%bode(G)

%b) G(s) reguleres med en proportionalregulator (Gc(s) = Kp). Bestem ved simulering af lukketsløjfen,
%den Kp-værdi, der giver 5% oversving for et stepinput. Bestem ud fra stepresponsen
%systemets stationære fejl og opvoksningstiden Tr .
%Kontroller ved hjælp af amplitude og fasekarakteristik, at den fundne værdi af Kp stemmer
%overens med vore åben-sløjfe designregler. Bestem omega_phase_m og phase_m.

step(feedback(G,1))

%Tr=0.00227
%stationære fejl=1-0.929

bode(G)

%omega_phase_m=568rad/s
%phase_m=66

%det stemmer overens

%c) Gentag b), men nu til 30% oversving.
%Dimensioner nu en Lead-regulator, der reducerer oversvinget til 5% med samme ??m
%(samme båndbredde). Bestem systemets stationære fejl og opvoksningstiden.
%Eftervis resultatet i Matlab.

P_OS=0.3;
zeta=-log(P_OS)/(pi^2+log(P_OS)^2)^0.5;
phi_m=atan(2*zeta/(-2*zeta^2+(1+4*zeta^4)^0.5)^0.5);
theta_m=phi_m*360/(2*pi);

%33dB skal haves via kp

kp_30=10^(33/20);

G=50000*kp_30/((s+50)*(s+1000));

bode(G)

%??m=1330rad/s
%?m=39

theta_m_plus=66+7-39;
phi_m_plus=theta_m_plus*2*pi/360;

beta=(1-sin(phi_m_plus))/(1+phi_m_plus);

T_lead=1/(1330*sqrt(beta));

G_lead=1/beta*(s+1/T_lead)/(s+1/(beta*T_lead));

bode(G_lead*G)

kc=1/(10^(4.45/20));

G_lead=kc/beta*(s+1/T_lead)/(s+1/(beta*T_lead));

step(feedback(G_lead*G,1))

stationaer_fejl=0.964;
omega_phase_m=1330;

T_lag=10/omega_phase_m;
alpha= 1/stationaer_fejl;

G_lag=(s+1/T_lag)/(s+1/(alpha*T_lag));

step(feedback(G_lead*G*G_lag,1))


%1+(TD*S/(TL*S+1)) = 1+TD*S

%øvelse
%1b kp0.05=11
%1c kp0.3=41.5



