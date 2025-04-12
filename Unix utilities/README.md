## 🛠️ Unix Utilities: `mycp`, `mymv`, `myecho`, `mypwd`

This project provides basic implementations of common Unix command-line utilities in C:

- `mycp` – Copy files.
- `mymv` – Move (rename) files.
- `myecho` – Print arguments to the standard output.
- `mypwd` – Print the current working directory.

---

### 📁 Files

| File       | Description                        |
|------------|------------------------------------|
| `mycp.c`   | Mimics the `cp` command            |
| `mymv.c`   | Mimics the `mv` command            |
| `myecho.c` | Mimics the `echo` command          |
| `mypwd.c`  | Mimics the `pwd` command           |

---

### ⚙️ Compilation

```bash
gcc mycp.c -o mycp
gcc mymv.c -o mymv
gcc myecho.c -o myecho
gcc mypwd.c -o mypwd
```

---

### 🚀 Usage

#### 📄 Copy a File

```bash
./mycp source_file target_file
```

#### Example:

```bash
./mycp file.txt copy.txt
```


#### ✂️ Move a File

```bash
./mymv source_file target_file
```

#### Example:

```bash
./mymv oldname.txt newname.txt
```


#### 🗣️ Echo Text

```bash
./myecho Hello World!
```

Output:
```
Hello World!
```

#### 📍 Show Current Directory

```bash
./mypwd
```

Output:
```
/your/current/directory
```

---
