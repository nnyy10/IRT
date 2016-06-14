clear;
clc;

%% irt forberedelse

%% 1
s=tf('s');
K_PA=3.8;
K_P=1;
G_s=K_PA*K_P*10*(14.34/(s*(s+33)));

figure
bode(G_s)
figure
step(feedback(G_s,1),'g')

w_phi_m=15;
T_low=0.15/w_phi_m;
T_high=0.5/w_phi_m;

f_high=1/T_low;
f_low=1/T_high;

G_z_zoh_low=c2d(G_s,T_low,'zoh');
G_z_zoh_high=c2d(G_s,T_high,'zoh');

figure
step(feedback(G_z_zoh_low,1),'g')
hold on
step(feedback(G_z_zoh_high,1),'b')

figure
bode(G_z_zoh_low)
figure
bode(G_z_zoh_high)

figure
step(feedback(G_s,1),'b')

%% 2

Td = 0.0008;

[num,den]=pade(Td,3);       %making time delay with pade of 3rd order
                            %function returns numerator and denominator of the
                            %transferfunction
G_delay=tf(num,den);        %making the delay transfer function

figure
bode(G_s, 'r')
hold on
bode(G_delay*G_s, 'b')
legend('Before','After')

figure
bode(G_delay*G_s)
figure
step(feedback(G_delay*G_s,1))

%% 3

G_lag=(s+3)/(s+0.6);

figure
bode(G_lag)

%% 4

G_z_lag=c2d(G_lag,T_low,'tustin');

figure
bode(G_z_lag)
figure
step(feedback(G_z_lag,1))


t=0:T_low:4;
x=sawtooth(4*pi/4*t,0.5);
y_med_lag=lsim(feedback(G_z_lag*G_z_zoh_low,1),0.2*x);
figure
plot(t,0.2*x,'r',t,y_med_lag,'g')

y_uden_lag=lsim(feedback(G_z_zoh_low,1),0.2*x);
figure
plot(t,0.2*x,'r',t,y_uden_lag,'g')

syms S
Kv_uden_lag=limit((K_PA*K_P*10*(14.34/(S*(S+33))))*S,S,0)
erro_uden_lagr=1/Kv_uden_lag

Kv_med_lag=limit((K_PA*K_P*10*(14.34/(S*(S+33))))*((S+3)/(S+0.6))*S,S,0)
error_med_lag=1/Kv_med_lag
