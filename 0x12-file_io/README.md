<h1 align="center"> File I/O </h1>


A file represents a sequence of bytes on the disk where a group of related data is stored. File is created for permanent storage of data. It is a ready made structure.

In C language, we use a structure pointer of file type to declare a file.

```c
FILE *fp;
```

C provides a number of functions that helps to perform basic file operations. Following are the functions:

<table> 
  <tr>
    <td>Function</td>
    <td>Description</td>
  </tr>
  <tr>
    <td>fopen()</td>
    <td>create a new file or open a existing file</td>
  </tr>
  <tr>
    <td>fclose()</td>
    <td>closes a file</td>
  </tr>
  <tr>
    <td>getc()</td>
    <td>reads a character from a file</td>
  </tr>
  <tr>
    <td>putc()</td>
    <td>writes a character to a file</td>
  </tr>
  <tr>
    <td>fscanf()</td>
    <td>reads a set of data from a file</td>
  </tr>
  <tr>
    <td>fprintf()</td>
    <td>writes a set of data to a file</td>
  </tr>
  <tr>
    <td>getw()</td>
    <td>reads a integer from a file</td>
  </tr>
  <tr>
    <td>putw()</td>
    <td>writes a integer to a file</td>
  </tr>
  <tr>
    <td>fseek()</td>
    <td>set the position to desire point</td>
  </tr>
  <tr>
    <td>ftell()</td>
    <td>gives current position in the file</td>
  </tr>
</table>

<h3> Basic syntax </h3>

```c
*fp = FILE *fopen(const char *filename, const char *mode);
```
Here, *fp is the FILE pointer (FILE *fp), which will hold the reference to the opened(or created) file.
