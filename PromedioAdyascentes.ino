// Por Roberto A. Zavala
// Breve : 
// Libro : https://www.amazon.com.mx/dp/B074TTGLL2
// 🙏🏼    : DNv7acPAeVBhTXbKv26itJecPG1SPy2o4F

const int n = 9;     // n+1
float Pm[n];         // subconjunto de n datos
int m = n-1;         // contador
int I;               // intensidad
float Ip;            // intensidad promedio

void setup()
{
Serial.begin(9600);
}

void loop()
{
I = analogRead(A0);
PMD();
//Serial.print(micros());  Serial.print("\t"); // Comentar para Serial Plotter
Serial.print(Pm[2]);  Serial.print("\t");  Serial.println(Ip);
delay(100);
}

void PMD ()
{
  for ( int i=0; i<=m-1; i++ ) { Pm[i] = Pm[i+1]; }
  Pm[m] = I ;
  Ip    = 0;
  for ( int i=0; i<= m;  i++ ) { Ip = Ip + Pm[i]; }
  Ip = Ip / n;
}
