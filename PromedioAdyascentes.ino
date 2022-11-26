int n = 9;           // n+1
int Pm[n];           // subconjunto de n datos
int m = n-1;         // contador
int I;               // intensidad
int Ip;              // intensidad promedio

void setup()
{
Serial.begin(9600);
}

void loop()
{
I = analogRead(A0);
Serial.print(I);
PMD();
Serial.print(Ip);
}

void PMD ()
{
  for ( int i=0; i<=m-1; i++ ) { Prm[i] = Prm[i+1]; }
  Pm[m] = I ;
  Ip    = 0;
  for ( int i=0; i<= m;  i++ ) { Ip = Ip + Pm[m]; } 
  Ip = Ip / n;
}
