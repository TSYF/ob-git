--- examples/read/read.cpp
+++ examples/read/read.cpp
@@ -43,6 +43,7 @@
 #include <cstdio>
 #include <cstdlib> // MAX_PATH
 #include <climits> // PATH_MAX
+#include <unistd.h> // getcwd
 
 
 #if defined(__WIN32__) || defined(WIN32)
