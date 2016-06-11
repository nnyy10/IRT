clc;clear;


% open-loop

s = tf('s');

T_open_maeling = 1339.6/((s+7.88)*(s+170));

T_teoretisk = 50000/((s+50)*(s+1000));

T_closed_maeling = 3408.6/((s+195)*(s+17.48));

figure
hold on;
bode(T_teoretisk)
bode(T_open_maeling)
bode(T_closed_maeling)
legend('Teoretisk','Open-loop Måling','Closed-loop Måling');

figure
hold on;
step(T_teoretisk)
step(T_open_maeling)
step(T_closed_maeling)
legend('Teoretisk','Open-loop Måling','Closed-loop Måling');


