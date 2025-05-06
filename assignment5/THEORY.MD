

---

### 1. **What are streams in C++ and why are they important?**

Streams are abstract representations of input and output devices. In C++, streams are used to perform input/output operations on various devices (keyboard, console, files). They simplify I/O by treating all devices as a sequence of bytes or characters.

---

### 2. **Explain the different types of streams in C++.**

* **Input Stream:** Used to read data (e.g., `cin`, `ifstream`).
* **Output Stream:** Used to write data (e.g., `cout`, `ofstream`).
* **Bidirectional Stream:** Can read and write (e.g., `fstream`).
* **String Stream:** Performs I/O on strings (`stringstream`).

---

### 3. **How do input and output streams differ in C++?**

* **Input streams** (like `cin`, `ifstream`) are used to read data from input devices.
* **Output streams** (like `cout`, `ofstream`) are used to send data to output devices.

---

### 4. **Describe the role of the iostream library in C++.**

The `iostream` library provides classes (`istream`, `ostream`, etc.) and objects (`cin`, `cout`, `cerr`) to perform standard input and output operations.

---

### 5. **What is the difference between a stream and a file stream?**

A stream handles general I/O (keyboard, screen), while a file stream specifically handles file input/output using classes like `ifstream`, `ofstream`, and `fstream`.

---

### 6. **What is the purpose of the cin object in C++?**

`cin` is an object of class `istream` used to take input from the standard input device (usually the keyboard).

---

### 7. **How does the cin object handle input operations?**

`cin` uses the extraction operator (`>>`) to read formatted input and skips whitespaces by default.

---

### 8. **What is the purpose of the cout object in C++?**

`cout` is an object of class `ostream` used to display output to the standard output device (usually the screen).

---

### 9. **How does the cout object handle output operations?**

`cout` uses the insertion operator (`<<`) to output formatted data to the console.

---

### 10. **Explain the use of the insertion (<<) and extraction (>>) operators in conjunction with cin and cout.**

* `>>` (extraction): Extracts input from `cin` into variables.
* `<<` (insertion): Sends output from variables to `cout`.

---

### 11. **What are the main C++ stream classes and their purposes?**

* `istream`: Input stream class.
* `ostream`: Output stream class.
* `ifstream`: Input file stream.
* `ofstream`: Output file stream.
* `fstream`: Input/output file stream.
* `stringstream`: String-based I/O stream.

---

### 12. **Explain the hierarchy of C++ stream classes.**

```
        ios
       /   \
  istream  ostream
      \      /
      iostream
       |
     fstream
```

All stream classes are derived from the base class `ios`.

---

### 13. **What is the role of the istream and ostream classes?**

* `istream` provides functions for input.
* `ostream` provides functions for output.

---

### 14. **Describe the functionality of the ifstream and ofstream classes.**

* `ifstream`: Reads from files.
* `ofstream`: Writes to files.

---

### 15. **How do the fstream and stringstream classes differ from other stream classes?**

* `fstream`: Handles both input and output with files.
* `stringstream`: Performs I/O on strings instead of files or console.

---

### 16. **What is unformatted I/O in C++?**

Unformatted I/O deals with data as raw bytes or characters (no formatting).

---

### 17. **Provide examples of unformatted I/O functions.**

* `get()`, `put()`
* `read()`, `write()`
* `getline()`

---

### 18. **What is formatted I/O in C++?**

Formatted I/O allows control over the appearance of input/output using manipulators and formatting functions.

---

### 19. **How do you use manipulators to perform formatted I/O in C++?**

Manipulators like `setw()`, `setprecision()`, and `fixed` are used to format the output.

---

### 20. **Explain the difference between unformatted and formatted I/O operations.**

* **Formatted I/O:** Uses operators and manipulators (e.g., `cout << setw(10)`).
* **Unformatted I/O:** Uses functions that handle raw input/output (e.g., `get()`, `put()`).

---

### 21. **What are manipulators in C++?**

Manipulators are special functions that alter the format of input or output streams.

---

### 22. **How do manipulators modify the behavior of I/O operations?**

They change formatting settings such as width, precision, fill characters, alignment, etc.

---

### 23. **Provide examples of commonly used manipulators in C++.**

* `setw()`
* `setprecision()`
* `fixed`
* `showpoint`
* `endl`

---

### 24. **Explain the use of the setw, setprecision, and fixed manipulators.**

* `setw(n)`: Sets the width of the next output field to `n`.
* `setprecision(n)`: Sets the number of digits displayed.
* `fixed`: Displays floating-point numbers in fixed-point notation.

---

### 25. **How do you create custom manipulators in C++?**

Custom manipulators are created by defining a function that takes and returns a stream reference.

```cpp
ostream& custom(ostream& os) {
    os << ">>>";
    return os;
}
cout << custom << "Hello";
```

---

### 26. **What is a file stream in C++ and how is it used?**

A file stream is an object that allows reading from or writing to files. It's used with `ifstream`, `ofstream`, or `fstream`.

---

### 27. **Explain the process of opening and closing files using file streams.**

```cpp
ifstream fin("input.txt"); // opens file
fin.close();               // closes file
```

---

### 28. **Describe the different modes in which a file can be opened.**

* `ios::in`, `ios::out`, `ios::app`, `ios::trunc`, `ios::binary`, `ios::ate`

---

### 29. **How do you read from and write to files using file streams?**

```cpp
ifstream fin("data.txt");
string line;
getline(fin, line);

ofstream fout("out.txt");
fout << "Hello, File!";
```

---

### 30. **Provide an example of using file streams to copy the contents of one file to another.**

```cpp
ifstream fin("source.txt");
ofstream fout("destination.txt");
string line;
while (getline(fin, line)) {
    fout << line << "\n";
}
```

---

### 31. **What are the main C++ file stream classes and their purposes?**

* `ifstream`: For input from files.
* `ofstream`: For output to files.
* `fstream`: For both input and output.

---

### 32. **Explain the role of the ifstream, ofstream, and fstream classes.**

* `ifstream`: Reads data from files.
* `ofstream`: Writes data to files.
* `fstream`: Performs both read/write.

---

### 33. **How do you use the ifstream class to read data from a file?**

```cpp
ifstream fin("file.txt");
string s;
fin >> s;
```

---

### 34. **How do you use the ofstream class to write data to a file?**

```cpp
ofstream fout("file.txt");
fout << "Hello World";
```

---

### 35. **Describe the functionality of the fstream class for both input and output operations.**

```cpp
fstream file("data.txt", ios::in | ios::out);
file << "Writing";
file.seekg(0);
string s;
file >> s;
```

---

### 36. **What are file management functions in C++?**

Functions that manage file properties like `remove()`, `rename()`, `seekg()`, `seekp()`.

---

### 37. **How do you use the remove and rename functions to manage files?**

```cpp
remove("oldfile.txt");
rename("old.txt", "new.txt");
```

---

### 38. **Explain the purpose of the seekg and seekp functions in file management.**

* `seekg()`: Moves the get (read) pointer.
* `seekp()`: Moves the put (write) pointer.

---

### 39. **Provide examples of using file management functions to manipulate file pointers.**

```cpp
fstream f("data.txt", ios::in | ios::out);
f.seekp(5); // move write pointer
f << "ABC";
f.seekg(0); // move read pointer
```

---

### 40. **What are file modes in C++?**

Flags that control how a file is opened (read/write, append, binary, etc.).

---

### 41. **Describe the different file modes available in C++.**

* `ios::in`, `ios::out`, `ios::app`, `ios::trunc`, `ios::binary`, `ios::ate`

---

### 42. **How do you specify a file mode when opening a file?**

```cpp
fstream f("file.txt", ios::in | ios::out | ios::binary);
```

---

### 43. **Explain the difference between binary and text file modes.**

* **Text mode:** Data is stored as readable characters.
* **Binary mode:** Data is stored in binary format.

---

### 44. **Provide examples of opening files in different modes using file streams.**

```cpp
ifstream fin("file.txt", ios::in);
ofstream fout("file.bin", ios::out | ios::binary);
```

---

### 45. **What are binary files in C++ and how do they differ from text files?**

Binary files store data in raw format and are not human-readable, unlike text files.

---

### 46. **Explain the process of reading from and writing to binary files.**

```cpp
struct Data { int x; char y; };
Data d = {5, 'A'};
ofstream fout("data.bin", ios::binary);
fout.write((char*)&d, sizeof(d));
```

---

### 47. **What are random access files in C++?**

Files that allow accessing any part of the file directly using pointers (`seekg`, `seekp`).

---

### 48. **How do you perform random access operations on files?**

```cpp
fstream f("data.txt", ios::in | ios::out);
f.seekg(10); // move to 10th byte
```

---

### 49. **Provide examples of using file streams to implement random access in binary files.**

```cpp
fstream f("data.bin", ios::in | ios::out | ios::binary);
f.seekp(2 * sizeof(Data));
f.write((char*)&data, sizeof(data));
```

---


