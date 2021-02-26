//Binomial.cpp 
#include "binomial.h"

Binomial::Binomial(float c1, float c2, int p1, int p2)
{
    coeff1 = c1;
    coeff2 = c2;
    if (p1 < 1)
      exp1 = 1;
    else 
      exp1 = p1;
    if  (p2 < 1)
      exp2 = 1;
    else
      exp2 = p2;  
}
float Binomial::GetCoefficient(int num)
{
  if (num == 1)
    return coeff1;
  else if (num == 2)
    return coeff2;
  else 
    return -1;
}
int Binomial::GetPower(int num)
{
  if (num ==1)
    return exp1;
  else if (num ==2)
    return exp2;
  else 
    return -1;
}
int Binomial::SetPower(int num, int val)
{
  if (num ==1)
  {
    if (val < 1)
          exp1 = 1;
    else 
          exp1 = val;
    return 0;
  }
  else if (num ==2)
  {
    if (val < 1)
        exp2 = 1;
    else 
        exp2 = val;
    return 0;
  }
  else 
  {
    return -1;
  }
}

int Binomial::Add(Binomial &B){
  if (exp1 == B.exp1 && exp2 == B.exp2)
  {
    coeff1 *= B.coeff1;
    coeff2 *= B.coeff2;
    return 0;
  }
  else{
    return -1;
  }
}
void Binomial::Multiply(float n){
  coeff1 *= n;
  coeff2 *= n;
}
void Binomial::Multiply(float monoCoeff, int monoPow){
  coeff1 *= monoCoeff;
  coeff2 *= monoCoeff;
  exp1 *= monoPow;
  exp2 *= monoPow;
}
