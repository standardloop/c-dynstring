# API Reference

## Classes

| Name                      | Description |
| ------------------------- | ----------- |
| [`DynString`](#dynstring) |             |

## Functions

---

### DynStringToCString

```cpp
char * DynStringToCString(DynString * str)
```

---

### DynStringFree

```cpp
void DynStringFree(DynString * str)
```

---

### DynStringPrint

```cpp
void DynStringPrint(DynString * str)
```

---

### DynStringAddCharAt

```cpp
void DynStringAddCharAt(DynString * str, size_t idx, char c)
```

---

### DynStringTrimEnd

```cpp
void DynStringTrimEnd(DynString * str)
```

---

### DynStringShiftLeft

```cpp
void DynStringShiftLeft(DynString * str, size_t index)
```

---

### DynStringDefaultInit

```cpp
DynString * DynStringDefaultInit()
```

## DynString

```cpp
struct DynString
```

### Public Attributes

| Return   | Name              | Description |
| -------- | ----------------- | ----------- |
| `char *` | [`value`](#value) |             |
| `size_t` | [`size`](#size)   |             |

---

#### value

```cpp
char * value
```

---

#### size

```cpp
size_t size
```
