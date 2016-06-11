clear;
clc;

%% forberedelse irt uge 18 oevelse 5

%% Ex1
%Med udgangspunkt i den analoge proportionalregulator fra øvelse 3 pkt. 
%1 c)   (OS=30%, Kp=4,2 x10,  ??m=1300 s-1) undersøges det ved simulering,  
%hvilken indflydelse det har på systemet, at PSoC’en med forstærkningen 1 gg 
%indsættes i reguleringssløjfen efter summationspunktet.
%Undersøg virkningen ved både den højest og lavest anbefalede 
%samplingsfrekvens iflg. Åstrøm og Wittenmark.
%Verificer virkningen ud fra Bodeplot og stepresponse

s=tf('s');

K_p=42;

G_s=50*1000/((s+50)*(s+1000));    %function from oevelse 3

P_OS=0.3;  %30 percent overshoot
zeta=-log(P_OS)/(pi^2+log(P_OS)^2)^0.5;      %calculating zeta from the overshoot
phi_m=atan(2*zeta/(-2*zeta^2+(1+4*zeta^4)^0.5)^0.5);%the phase margin in radians
theta_m=phi_m*360/(2*pi);       %the phase margin in degrees

w=1300;

figure
bode(G_s*K_p)     %by looking at the bode plot of G, we can see the amplitude is 
            %at 0 gain(dB) when the frequency is 1300
figure
step(feedback(G_s,1)) % looking at the feedback of the system
                    % overshoot is about 27%

                    
% 0.15/w<T<0.5/w
% 1.1538e-04 < T < 3.8462e-04

Ts1=1e-04;
Ts2=2e-04;
Ts3=3.8e-04;

                                 
G_z_zoh1=c2d(G_s,Ts1,'zoh');
G_z_zoh2=c2d(G_s,Ts2,'zoh');
G_z_zoh3=c2d(G_s,Ts3,'zoh');

G_z_tus1=c2d(G_s,Ts1,'tustin');
G_z_tus2=c2d(G_s,Ts2,'tustin');
G_z_tus3=c2d(G_s,Ts3,'tustin');

figure
step(feedback(G_z_zoh1*K_p,1),'r')  %why can we only multiply it here and not the original 
hold on
step(feedback(G_z_zoh2*K_p,1),'g')
hold on
step(feedback(G_z_zoh3*K_p,1),'b')

figure
step(feedback(G_z_tus1*K_p,1),'r')  %why can we only multiply it here and not the original 
hold on
step(feedback(G_z_tus2*K_p,1),'g')
hold on
step(feedback(G_z_tus3*K_p,1),'b')

%% EX2
%2.	Vi vil efterfølgende forestille os, at der sammen med Blackbox-processen 
%er en tidsforsinkelse på Td = 0,8 ms i åbensløjfen.

Td = 0.0008;

[num,den]=pade(Td,3);        %making time delay with pade of 3rd order
                        %function returns numerator and denominator of the
                        %transferfunction
G_delay=tf(num,den);    %making the delay transfer function

figure
bode(G_delay)

figure
bode(G_delay*G_s*K_p)

figure
step(feedback(G_delay*G_s*K_p,1))


%% EX3
%3.	Design en analoge lead- regulator Gc(s) således, at der kompenseres for
%tidsforsinkelsen, Td, idet der fortsat ønskes en fasemarginsfrekvens på 
%ca.1300 rad/s og et oversving på 30%. 
%Verificer resultatet ud fra Bodeplot og simuler stepresponset i Matlab.

figure
bode(G_delay*G_s*K_p)%phase margin frequency is still 1300 but phase margin
                        %is now at -20
                        %without delay, the phase margin is 40
                        % therefore the lead needs to have +60 phase
theta_m_plus=60;
phi_m_plus=60*2*pi/360; %converting from degrees to radians

beta=(1-sin(phi_m_plus))/(1+sin(phi_m_plus)); %calculating beta used in G lead

T=1/(w*sqrt(beta));     %calculating T from beta

G_lead=(1/beta)*(s+1/T)/(s+(1/(beta*T))); %first plot G_lead without Kc

figure
bode(G_lead)%at 1300, the gain is 11.5 dB, so Kc needs to make that 0

Kc=1/(10^(11.5/20));    %therefore Kc needs to be inverse the gain to make it 0

G_lead=(Kc/beta)*(s+1/T)/(s+(1/(beta*T)));  %adding on Kc

figure
bode(G_lead*K_p*G_s*G_delay)

figure
step(feedback(G_lead*K_p*G_s*G_delay,1))

%% EX4
%4.	Beregn den digitale lead-regulator Gc(z) ved en bilineær transformation
%(Matlab/ ’Tustin’) af den i spm.3 beregnede analoge regulator Gc(s). 
%Bringes på formen:   
%Gc(z) beregnes for 2 forskellige sampleintervaller: den størst anbefalede 
%iflg. Åstrøm og Wittenmark og en 10 gange mindre.

% 0.15/w < T < 0.5/w
% 1.1538e-04 < T < 3.8462e-04

Tmax=3.846e-04;
Tmax_d10=3.846e-05;
                          
G_lead_z_max=c2d(G_lead*K_p,Tmax,'tustin');
G_lead_z_max_d10=c2d(G_lead*K_p,Tmax_d10,'tustin');

%% EX5
%5.	Bestem over¬føringsfunktionen G0(z) = Z{Gh(s)Gp(s)} med Matlab ( ’zoh’), 
%idet tidsforsinkelsen  medregnes i processen Gp(s). Tidsforsinkelsen 
%tilnærmes i Matlab ved en 3.ordens Padé- approksimation. 
%Beregn overføringsfunktionerne for begge de 2 samplefrekvenser fra pkt.4 
%ovenfor.

G_0_max=c2d(G_delay*G_s,Tmax,'zoh');
G_0_max_d10=c2d(G_delay*G_s,Tmax_d10,'zoh');

%% EX6
%6.	Med ovenstående regulatorer simuleres lukketsløjfesystemets steprespons 
%i Matlab for begge samplingfrekvenser. Kommenter resultaterne i forhold til 
%anbefalingerne i kap13.10, Åstrøm og Wittenmark’s guidelines. Undersøg signalet
%på både proces indgang og udgang og overvej evt. mætningsproblemer.


figure
step(feedback(G_lead_z_max,G_0_max))
figure
step(feedback(G_lead_z_max_d10,G_0_max_d10))
