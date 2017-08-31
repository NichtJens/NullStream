# NullStream
A silent C++ streambuffer class that swallows everything

---

This class allows easily switching between quiet and verbose/debug mode by replacing for instance `cout` with `cnotout` within arbitrary sized scope (one line, one file, the whole project, ...).

### Example:

```C++
#include "NullStream.h"

bool verbose = false;
ostream & print_out = (verbose ? cout : cnotout);

print_out << "Hello World!" << endl; // prints nothing!
```
