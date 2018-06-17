#ifndef FORMULAS_H
#define FORMULAS_H
#include <iostream>
#include <vector>

//Calculate position
double calcPos(const double& vel, const double& time);


//Calculate velocity
double calcVel(const double& acc, const double& time);


//Calculate acceleration
//acceleration = (Fgrf - Fg)/mass
//Fgrf = Fz from forceplate
//Fg = mass * 9.81 m/s^2
//mass in kg
double calcAcc(const double& Fgrf, const double& mass, const double& Fg);


//Calculate force of gravity
//requires mass
//constant of 9.81 m/s^2
//Fg = mass in kg * 9.81 m/s^2
double calcGravity(const double& mass);

//Calculate mass
//requires Vector to find force in Newtons
double calcMass(std::vector<std::pair<double, double> > &plateData);

#endif
