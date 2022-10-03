#include "Letra.h"

bool operator==(const Letra &l1,const Letra &l2) {
	return (tolower(l1._valor) == tolower(l2._valor));
}
