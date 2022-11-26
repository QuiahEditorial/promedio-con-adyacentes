

void PMD ()
{
  for ( int j=0; j<=k; j++) { Prm[j] = Prm[j+1]; }
  Prm[k] = I ;
  Ipm = 0;
  for ( int j=0; j<=k; j++ ) { Ipm = Ipm + Prm[k]; } Ipm = Ipm / K;
}
