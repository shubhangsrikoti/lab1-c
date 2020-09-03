// Author Shubhang Srikoti svs6959@psu.edu
// Collaborator Zihan Xia zfx5078@psu.edu
// Collaborator Xinyi Yang xvy5166@psu.edu
// Collaborator Lynn Francis jtf5383@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *tempstr = readline("Enter temperature in celsius: ");
  double temp = atof(tempstr);
  double fahrenheit = (1.8 * temp) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, fahrenheit);

  return fahrenheit;
}