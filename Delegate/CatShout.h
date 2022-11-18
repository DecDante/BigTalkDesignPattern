#pragma once

#include "Macro_Delegate.h"

class Cat;
class CatShoutEventArgs;

// DELEGATE0(void, CatShout0);

DELEGATE2(void, CatShout2, Cat*, CatShoutEventArgs*);
