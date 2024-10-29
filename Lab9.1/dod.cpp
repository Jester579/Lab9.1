#include "dod.h"
#include "var.h" 
#include <math.h>
using namespace nsVar;
void nsDod::dod() {
	a = pow(x, 2 * n + 1) / (2 * n + 1);
}