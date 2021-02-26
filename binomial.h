//Binomial.h
class Binomial{
  float coeff1; float coeff2;
  int exp1, exp2; 

public:
Binomial(float c1=1.0, float c2 = 1.0, int p1=1, int p2 = 1);
float GetCoefficient (int num);
int GetPower (int num);
int SetPower (int num, int val);
int Add (Binomial &B);
void Multiply (float n);
void Multiply (float monoCoeff, int monoPow);
};