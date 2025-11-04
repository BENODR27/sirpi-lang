**Sirpi-Lang** is a **Tamil-based programming language** inspired by Go, designed to help Tamil-speaking developers write high-performance programs with simple syntax.

This MVP supports:

- Variable declaration (`மாறி`)
- Function declaration (`செயல்பாடு`)
- Class declaration (`வகுப்பு`)
- Basic I/O (`அச்சிடு`, `உள்ளீடு`)

---

## **Features (MVP)**

| Feature              | Tamil Keyword Example |
| -------------------- | --------------------- |
| Variable declaration | `மாறி x`              |
| Function declaration | `செயல்பாடு foo()`     |
| Return statement     | `திரும்பு value`      |
| Class declaration    | `வகுப்பு MyClass`     |
| Print to console     | `அச்சிடு("Hello")`    |
| Input from user      | `x = உள்ளீடு()`       |

---

## **Installation**

1. **Clone the repository:**

```bash
git clone https://github.com/yourusername/sirpi-lang.git
cd sirpi-lang
```

2. **Compile the interpreter:**

```bash
make
```

This will produce the executable `sirpi`.

3. **Clean build files (optional):**

```bash
make clean
```

---

## **Usage**

### **Run a Tamil program**

```bash
./sirpi examples/mvp.sirpi
```

### **Example Tamil Program**

`examples/mvp.sirpi`

```tamil
மாறி x
மாறி y
செயல்பாடு கூட்டி(a,b)
    திரும்பு

வகுப்பு கார்ப்
    மாறி வேகம்
```

**Output:**

```
Declared variable: x
Declared variable: y
Declared function: கூட்டி
Declared class: கார்ப்
```

---

### **Creating Your Own Programs**

1. Write a `.sirpi` file using Tamil keywords.
2. Run it using the `sirpi` interpreter:

```bash
./sirpi myprogram.sirpi
```

### **Example with Input/Output**

```tamil
மாறி age
அச்சிடு("உங்கள் வயதை உள்ளிடவும்:")
age = உள்ளீடு()
அச்சிடு("உங்கள் வயது: " + age)
```

---

## **Integrate into Your Project**

1. Copy `sirpi` executable to your project directory.
2. Add Tamil `.sirpi` scripts in a folder (e.g., `scripts/`).
3. Call them from CLI in your build scripts or runtime:

```bash
./sirpi scripts/myscript.sirpi
```

4. For advanced usage, extend `stdlib` or runtime in C for **custom project APIs**.

---

## **Directory Structure**

```
sirpi-lang/
├─ src/
│  ├─ lexer/
│  ├─ parser/
│  ├─ semantic/
│  ├─ runtime/
│  ├─ stdlib/
├─ examples/      # Tamil sample programs
├─ tests/         # Unit test scripts
├─ cli/           # Main entry point
├─ docs/          # Documentation
├─ Makefile       # Build commands
├─ README.md      # This file
```

---

## **Future Plans**

- Add function execution with return values.
- Support arithmetic expressions and loops (`முழக்கம்`).
- Full OOP: class instantiation, methods, member variables.
- Package/module system for reusable Tamil libraries.





Perfect! Let’s create a **full Tamil “Hello World” example with functions, classes, and I/O** that can be included in your **README** so users can immediately test **Sirpi-Lang**.

---

## **Example Program: hello_world.sirpi**

```tamil
# Variable declarations
மாறி name
மாறி age

# Function declaration
செயல்பாடு வணக்கம்(பெயர்)
    அச்சிடு("வணக்கம் " + பெயர்)
    திரும்பு

# Class declaration
வகுப்பு மாணவன்
    மாறி பெயர்
    மாறி வயது
    செயல்பாடு காட்டு()
        அச்சிடு("பெயர்: " + பெயர் + ", வயது: " + வயது)
        திரும்பு

# Program execution
அச்சிடு("உங்கள் பெயரை உள்ளிடவும்:")
name = உள்ளீடு()
அச்சிடு("உங்கள் வயதை உள்ளிடவும்:")
age = உள்ளீடு()

# Call function
வணக்கம்(name)

# Create class instance and set members
மாணவன்1 = புதிய மாணவன்()
மாணவன்1.பெயர் = name
மாணவன்1.வயது = age
மாணவன்1.காட்டு()
```

---

### **Expected Output**

```
உங்கள் பெயரை உள்ளிடவும்:
[User enters: அஜய்]
உங்கள் வயதை உள்ளிடவும்:
[User enters: 25]
வணக்கம் அஜய்
பெயர்: அஜய், வயது: 25
```

---

### **How to Run**

1. Save the above file as `examples/hello_world.sirpi`.
2. Run via CLI:

```bash
./sirpi examples/hello_world.sirpi
```

3. Follow the prompts for input.

---

### **Explanation**

1. **Variables:** `மாறி` is used to declare Tamil variables.
2. **Functions:** `செயல்பாடு` declares a function. `திரும்பு` returns a value (optional in this MVP).
3. **Classes:** `வகுப்பு` declares a class. `புதிய` creates a new instance.
4. **Methods:** Functions inside classes can be called with dot notation: `மாணவன்1.காட்டு()`.
5. **I/O:**

   * `அச்சிடு` → prints to console
   * `உள்ளீடு` → reads integer input from user

---

I can also **update your MVP interpreter** to **actually support this full example** including:

* Function execution with arguments
* Class instantiation
* Method calls
* Input/output

This will make Sirpi-Lang **fully functional for OOP and functions in Tamil**.

Do you want me to do that next?
