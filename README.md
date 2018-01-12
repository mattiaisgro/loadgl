# loadgl
A compact, fast and cross-platform **OpenGL** function loader that has been tested on Windows and Linux.

### Usage
Place `loadgl.h`, `loadgl.cpp` and the GL folder inside your project and remember to link against needed libraries:
* Link opengl32 and gdi32 on Windows
* Link GL and X on Linux

Then you will be able to use the library as follows:

```
#include "loadgl.h"

using namespace GL;

...

loadgl();

// (Optional) Load a list of available extensions
loadglext();

std::cout << glIsSupported("ARB_framebuffer_object") << std::endl;

```
### C porting
There is a C version of the library that you can include using the file `loadgl_c.h`.

### Customization
You can define the `LOADGL_HEADER` macro to use a different header file (loadgl includes a standard one by default) and `LOADGL_MINIMAL` to use a simpler version of loadgl that doesn't include `std::map`.
