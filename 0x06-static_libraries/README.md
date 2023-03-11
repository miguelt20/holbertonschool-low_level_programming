<h1 align="center"> Static libraries </h1>

A static library is a file containing a collection of object files (*.o) that are linked into the program during the linking phase of compilation and are not relevant during runtime.
<br>
<div align="center">

<img src="https://res.cloudinary.com/practicaldev/image/fetch/s--m6UdcE24--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/i/l38vk6qbwisj20wzcbjz.PNG" />
</div>
<br>
As shown in the diagram above, when a program is compiled, the compiler generates an object file from a source file. After generating the object file, the compiler also invokes the Linker. The role of the linker, in this case, is to copy the code of the library to our object file.

Basically, static libraries are just a collection of object files that are merged by the linker with another object file to form a final executable.

Conventionally, they start with “lib” and end with “.a” or “.lib” (depending on your platform).
