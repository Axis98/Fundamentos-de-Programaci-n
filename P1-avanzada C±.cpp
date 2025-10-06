/**************************************
* NOMBRE: #Don Dimadon#
* PRIMER APELLIDO: #Crustaceo#
* SEGUNDO APELLIDO: #Cascarudo#
* DNI: #99999999F#
* EMAIL: #DonDimadon@gmail.com#
***************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {

  const char nombre[] = "Don Dimadon";
  const char apellido1[] = "Crustaceo";
  const char apellido2[] = "Cascarudo";
  int dni_num = 99999999;
  char dni_letra = 'F';
  const char mail[] = "DonDimadon@gmail.com";

  printf("%s\n",nombre);
  printf("%s\n",apellido1);
  printf("%s\n",apellido2);
  printf("%d%1c\n",dni_num,dni_letra);
  printf("%s",mail);
  return 0;
}
