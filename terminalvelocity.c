//To calculate terminal velocity of an object falling in water 
#include<stdio.h>
#include<math.h>
int main(int argc,char *argv[])
{
    
int D;//diameter
int rho_p;//density of sand particle
int rho_f;//density of fluid
double mu_f; //dynamic viscosity of fluid
int g; //gravity
int F_D; //Drag Force
int C_D; //Coefficent of Drag
int U_T; //Terminal Velocity solving for
int F_B; //Force of Bounacy
int m; //mass
int Re; //Reynolds Number
int W; //Weight
int PI; //pi
D = 300*10^(-6); // diameter of sand particle in units of meters
rho_p = 2000; // density of sand particle in units of kg/m^3
rho_f = 998.2; // density of fluid (kg/m^3) at 68 F
mu_f =(double)(1.002)*(pow(10,(-3))); // Dynamic Viscosity of fluid(kg/m*s) at 68 F
g = 9.81;// gravity (m/s^2)  
PI = 3.141592653589793;
// Re=((U_T·D·rho_f) / (mu_f));
// U_T=((Re*mu_f)/(D*rho_f));
// F_D=C_D·((PI·D*D) / (4))*0.5·rho_f·U_T*U_T;
// F_B=rho_f·((PI*pow (D, 3)) / (6))·g;
W=m*g;
m=rho_p*((PI*pow (D, 3)) / (6));
//C_D=((24) / (Re))*pow ((1+0.27·Re), 0.43)+0.47·(1-exp (-0.04*pow (Re, 0.38)));

Re=100;
while (Re <= 10000)
{
U_T=((Re*mu_f)/(D*rho_f));
F_D=C_D*((PI*D*D) / (4))*0.5*rho_f*U_T*U_T;
F_B=rho_f*((PI*pow (D, 3)) / (6))*g;
C_D=((24) / (Re))*pow ((1+0.27*Re), 0.43)+0.47*(1-exp (-0.04*pow (Re, 0.38)));
Re++;
if (F_D+F_B == W)
printf("%d",F_D);
printf("\n");
printf("%d",F_B);
break;
}
return 0;
}